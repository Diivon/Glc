#pragma once
#include <new>
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"

namespace gc {
	template<size_t StackSize>
	class StackAllocator {
	public:
		StackAllocator();
		memory::Block alloc(priv::bytes_t);
		memory::Block allocAll();
		bool free(const memory::Block &);
	private:
		void * _ptr;
		uint8 _data[StackSize];
	};
	template<size_t StackSize>
	StackAllocator<StackSize>::StackAllocator():
		_ptr(_data)
	{}

	template<size_t StackSize>
	memory::Block StackAllocator<StackSize>::alloc(priv::bytes_t bs){
		size_t freeVolume = &_data[StackSize - 1] - static_cast<uint8 *>(_ptr);
		if (freeVolume < bs.value)
			throw std::bad_alloc();
		void * resultptr = _ptr;
		_ptr = memory::getNextAligned(static_cast<uint8 *>(_ptr) + bs.value);
		return {resultptr, static_cast<uint8 *>(resultptr) + bs.value};
	}
	template<size_t StackSize>
	memory::Block StackAllocator<StackSize>::allocAll() {
		void * resultBeginPtr = _ptr;
		_ptr = &_data[StackSize - 1];
		return {resultBeginPtr, _ptr};
	}
	template<size_t StackSize>
	bool StackAllocator<StackSize>::free(const memory::Block & blk) {
		ptrdiff_t diff = (static_cast<uint8 *>(_ptr) - static_cast<uint8 *>(blk.end));
		if (diff <= GC_GET_WORD_SIZE / 2)
		{
			_ptr = blk.begin;//it already aligned
			return true;
		}
		else return false;
	}
}