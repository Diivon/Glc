#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"

namespace gc{
	class Mallocator{
	public:
		Mallocator() noexcept;
		memory::Slice allocate(priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
	};
	inline Mallocator::Mallocator() noexcept {}
	inline memory::Slice Mallocator::allocate(priv::bytes_t bs) noexcept{
		auto ptr = malloc(bs.value);
		memory::Slice result;
		if (ptr){
			result.begin = ptr;
			result.end = static_cast<void *>(static_cast<u8 *>(ptr) + bs.value);
			return result;
		}
		return memory::Slice::null;
	}
	inline bool Mallocator::deallocate(const memory::Slice & blk) noexcept{
		free(blk.begin);
		return true;
	}
}