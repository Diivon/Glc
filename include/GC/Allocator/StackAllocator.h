#pragma once
#include <new>
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"

namespace gc{
	template<size_t StackSize>
	class StackAllocator {
	public:
		StackAllocator();
		Optional<memory::Slice> allocate(sh::priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
		memory::Slice _alloc(sh::priv::bytes_t) noexcept;

		bool isEmpty() const noexcept{
			if (!_refCounter)
				panicAssert(_ptr == _data);
			return (_refCounter == 0);
		}
	private:
		bool isOwn(memory::Slice const &) const noexcept;
		size_t _refCounter;
		u8 * _ptr;
		u8 _data[StackSize];
	};
	template<size_t StackSize>
	inline StackAllocator<StackSize>::StackAllocator():
		_ptr(_data), _refCounter(0)
	{
		panicAssert(_ptr == _data);
	}

	template<size_t StackSize>
	inline Optional<memory::Slice> StackAllocator<StackSize>::allocate(sh::priv::bytes_t bs) noexcept{
		auto res = _alloc(bs);
		if (res.begin)
			return res;
		else return std::bad_alloc();
	}
	template<size_t StackSize>
	memory::Slice StackAllocator<StackSize>::_alloc(sh::priv::bytes_t bs) noexcept{
		panicAssert(_ptr >= _data && _ptr <= &_data[StackSize - 1]);

		size_t freeVolume = &_data[StackSize - 1] - _ptr;
		if (freeVolume < bs.value)
			return memory::Slice::null;
		
		void * resultptr = _ptr;
		_ptr = static_cast<u8 *>(memory::getNextAligned(_ptr + bs.value));
		++_refCounter;
		return memory::Slice{ resultptr, static_cast<u8 *>(resultptr) + bs.value };
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::deallocate(const memory::Slice & blk) noexcept{
		bool result = false;
		if (isOwn(blk)){
			--_refCounter;
			result = true;
			if (!_refCounter){
				_ptr = _data;
				return true;//because no more clients in block
			}
		}
		ptrdiff_t diff = (static_cast<u8 *>(_ptr) - static_cast<u8 *>(blk.end));
		if (diff <= GC_GET_WORD_SIZE)
		{
			_ptr = static_cast<u8 *>(blk.begin);//it already aligned
			return true;
		}
		return result;
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::isOwn(const memory::Slice & blk) const noexcept{
		bool expr1 = (_data <= blk.begin);
		bool expr2 = (_data + StackSize - 1 >= blk.end);
		if(expr1 && expr2)
			return true;
		else
			return false;
	}
}