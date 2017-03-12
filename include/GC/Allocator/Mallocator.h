#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"

namespace gc{
	class Mallocator{
	public:
		Mallocator();
		memory::Slice allocate(priv::bytes_t);
		bool deallocate(const memory::Slice &);
	};
	inline Mallocator::Mallocator(){}
	inline memory::Slice Mallocator::allocate(priv::bytes_t bs){
		auto ptr = malloc(bs.value);
		if (ptr)
			return {ptr, static_cast<u8>(ptr) + bs.value};
		return memory::Slice::null;
	}
	inline bool Mallocator::deallocate(const memory::Slice & blk){
		free(blk.begin);
		return true;
	}
}