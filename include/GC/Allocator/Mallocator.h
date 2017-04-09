#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"

namespace gc{
	class Mallocator{
	public:
		Mallocator() noexcept;
		Optional<memory::Slice> allocate(priv::bytes_t) noexcept;
		memory::Slice _alloc(priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
	};
	inline Mallocator::Mallocator() noexcept {}
	inline Optional<memory::Slice> Mallocator::allocate(priv::bytes_t bs) noexcept{
		auto res = _alloc(bs);
		if (res.begin)
			return res;
		else return std::bad_alloc();
	}
	inline memory::Slice Mallocator::_alloc(priv::bytes_t bs) noexcept{
		auto ptr = malloc(bs.value);
		if (ptr)
			return { ptr, static_cast<void *>(static_cast<u8 *>(ptr) + bs.value) };
		return memory::Slice::null;
	}
	inline bool Mallocator::deallocate(const memory::Slice & blk) noexcept{
		free(blk.begin);
		return true;
	}
}