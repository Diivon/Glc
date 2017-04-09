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
		Optional<memory::Slice> allocate(priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
		memory::Slice _alloc(priv::bytes_t) noexcept;
	private:
		u8 * _ptr;
		u8 _data[StackSize];
	};
	template<size_t StackSize>
	inline StackAllocator<StackSize>::StackAllocator():
		_ptr(_data)
	{}

	template<size_t StackSize>
	inline Optional<memory::Slice> StackAllocator<StackSize>::allocate(priv::bytes_t bs) noexcept{
		auto res = _alloc(bs);
		if (res.begin)
			return res;
		else return std::bad_alloc();
	}
	template<size_t StackSize>
	memory::Slice StackAllocator<StackSize>::_alloc(priv::bytes_t bs) noexcept{
		size_t freeVolume = &_data[StackSize - 1] - _ptr;
		if (freeVolume < bs.value)
			return memory::Slice::null;
		void * resultptr = _ptr;
		_ptr = static_cast<u8 *>(memory::getNextAligned(_ptr + bs.value));
		return memory::Slice{ resultptr, static_cast<u8 *>(resultptr) + bs.value };
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::deallocate(const memory::Slice & blk) noexcept{
		ptrdiff_t diff = (static_cast<u8 *>(_ptr) - static_cast<u8 *>(blk.end));
		if (diff <= GC_GET_WORD_SIZE)
		{
			_ptr = static_cast<u8 *>(blk.begin);//it already aligned
			return true;
		}
		else return false;
	}
}