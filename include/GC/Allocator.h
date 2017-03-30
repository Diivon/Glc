#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"
#include "GC/Settings.h"

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
		StackAllocator<GC_FAST_ALLOCATION_AREA_SIZE> _fast;
		ListAllocator<GC_SLOW_ALLOCATION_AREA_SIZE> _slow;
		Mallocator _other;
	public:
		inline Allocator();
		template<AllocationType T>
		inline memory::Slice allocate(priv::bytes_t) noexcept;
		inline bool deallocate(const memory::Slice &) noexcept;
	};
	Allocator::Allocator(){}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Defragmented>(priv::bytes_t b) noexcept{
		if (b.value > GC_SLOW_ALLOCATION_AREA_SIZE){
			auto result = _slow.allocate(b);
			if (result.begin)
				return result;
		}
		return _other.allocate(b);
	}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Fast>(priv::bytes_t b) noexcept{
		if (b.value > GC_FAST_ALLOCATION_AREA_SIZE){
			auto result = _fast.allocate(b);
			if (result.begin)
				return result;
		}
		return allocate<AllocationType::Defragmented>(b);
	}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Default>(priv::bytes_t b) noexcept{
		if (b .value < GC_FAST_ALLOCATION_AREA_SIZE / 10)
			return allocate<AllocationType::Fast>(b);
		return allocate<AllocationType::Defragmented>(b);
	}
	inline bool Allocator::deallocate(const memory::Slice & blk) noexcept{
		if (_fast.isOwn(blk)){
			_fast.deallocate(blk);
			return true;
		}
		if (_slow.isOwn(blk)){
			_slow.deallocate(blk);
			return true;
		}
		_other.deallocate(blk);
	}
}