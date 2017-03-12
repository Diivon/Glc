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
		memory::Slice allocate(priv::bytes_t) noexcept;
		memory::Slice allocateAll() noexcept;
		bool deallocate(const memory::Slice &) noexcept;
		bool deallocateAll() noexcept;

		bool isOwn(void *) const noexcept;
		bool expand(memory::Slice &, const priv::bytes_t & delta) noexcept;
	private:
		void * _ptr;
		uint8 _data[StackSize];
	};
	template<size_t StackSize>
	inline StackAllocator<StackSize>::StackAllocator():
		_ptr(_data)
	{}

	template<size_t StackSize>
	inline memory::Slice StackAllocator<StackSize>::allocate(priv::bytes_t bs){
		size_t freeVolume = &_data[StackSize - 1] - static_cast<uint8 *>(_ptr);
		if (freeVolume < bs.value)
			memory::Slice::null;
		void * resultptr = _ptr;
		_ptr = memory::getNextAligned(static_cast<uint8 *>(_ptr) + bs.value);
		return {resultptr, static_cast<uint8 *>(resultptr) + bs.value};
	}
	template<size_t StackSize>
	inline memory::Slice StackAllocator<StackSize>::allocateAll() {
		void * resultBeginPtr = _ptr;
		_ptr = &_data[StackSize - 1];
		return {resultBeginPtr, _ptr};
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::deallocate(const memory::Slice & blk) {
		ptrdiff_t diff = (_ptr - blk.end);
		if (diff <= GC_GET_WORD_SIZE)
		{
			_ptr = blk.begin;//it already aligned
			return true;
		}
		else return false;
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::deallocateAll(){
		_ptr = _data;
		return true;
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::isOwn(void * p){
		if( (_data < p) && (&_data[StackSize - 1] > p) )
			return true;
		else
			return false;
	}
	template<size_t StackSize>
	inline bool StackAllocator<StackSize>::expand(memory::Slice & block, const priv::bytes_t & delta){
		ptrdiff_t diff = (_ptr - blk.end);
		if (diff <= GC_GET_WORD_SIZE)
		{
			if ( (&_data[StackSize - 1] - blk.end) > delta.value )//if we able to allocate more for him
			{
				block.end = ( static_cast<uint8>(block.end) + delta.value );
				_ptr = memory::getNextAligned(block.end);
			}
			else return false;
		}
		else return false;
	}	
}