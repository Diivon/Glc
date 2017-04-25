#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"
#include "GC/Settings.h"
#include "GC/Optional.h"

#include "GC/Allocator/StackAllocator.h"
#include "GC/Allocator/ListAllocator.h"
#include "GC/Allocator/Mallocator.h"

namespace gc {
	enum class AllocationType{
		Default,
		Fast,
		Defragmented
	};
	class Allocator{
		static StackAllocator<GC_FAST_ALLOCATION_AREA_SIZE> & _fast;
		static ListAllocator<GC_SLOW_ALLOCATION_AREA_SIZE> & _slow;
		static Mallocator & _other;
	public:
		template<AllocationType T = AllocationType::Default>
		inline static Optional<memory::Slice> allocate(sh::priv::bytes_t);
		template<AllocationType T>
		inline static memory::Slice _alloc(sh::priv::bytes_t);
		inline static bool deallocate(const memory::Slice &) noexcept;
	};
	template<>
	inline memory::Slice Allocator::_alloc<AllocationType::Defragmented>(sh::priv::bytes_t b)
	{
		if (b.value < GC_SLOW_ALLOCATION_AREA_SIZE) {
			auto result = _slow._alloc(b);
			if (result.begin)
				return result;
		}
		return memory::Slice::null;		//if nothing
	}
	template<>
	inline memory::Slice Allocator::_alloc<AllocationType::Fast>(sh::priv::bytes_t b)
	{
		if (b.value < GC_FAST_ALLOCATION_AREA_SIZE) {
			auto result = _fast._alloc(b);
			if (result.begin)
				return result;
		}
		return memory::Slice::null;
	}
	template<>
	inline Optional<memory::Slice> Allocator::allocate<AllocationType::Defragmented>(sh::priv::bytes_t b){
		auto res = _alloc<AllocationType::Defragmented>(b);
		if (res.begin)
			return res;
		else 
			return std::bad_alloc();
	}
	template<>
	inline Optional<memory::Slice> Allocator::allocate<AllocationType::Fast>(sh::priv::bytes_t b){
		auto res = _alloc<AllocationType::Fast>(b);
		if (res.begin)
			return res;
		else 
			return std::bad_alloc();
	}
	template<>
	inline Optional<memory::Slice> Allocator::allocate<AllocationType::Default>(sh::priv::bytes_t b) {
		if (b.value < GC_FAST_ALLOCATION_AREA_SIZE) {
			auto res = _alloc<AllocationType::Fast>(b);
			if (res.begin) {
				return res;
			}
		}
		if (b.value < GC_SLOW_ALLOCATION_AREA_SIZE) {
			auto res = _alloc<AllocationType::Defragmented>(b);
			if (res.begin) {
				return res;
			}
		}
		{
			auto res = _other._alloc(b);
			if (res.begin) {
				return res;
			}
		}
		return std::bad_alloc();
	}


	inline bool Allocator::deallocate(const memory::Slice & blk) noexcept{
		if (!blk.begin)
			return false;
		if (_fast.deallocate(blk)){
			return true;
		}
		if (_slow.deallocate(blk)){
			return true;
		}
		return _other.deallocate(blk);
	}
}