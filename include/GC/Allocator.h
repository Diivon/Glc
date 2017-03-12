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
		Allocator();
		template<AllocationType T>
		memory::Slice allocate(priv::bytes_t);
		bool deallocate(const memory::Slice &);
	};
	Allocator::Allocator(){}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Default>(priv::bytes_t b){
		return _slow.allocate(b);
	}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Defragmented>(priv::bytes_t b){
		return _slow.allocate(b);
	}
	template<>
	inline memory::Slice Allocator::allocate<AllocationType::Fast>(priv::bytes_t b){
		return _fast.allocate(b);
	}
	inline bool Allocator::deallocate(const memory::Slice & blk){
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