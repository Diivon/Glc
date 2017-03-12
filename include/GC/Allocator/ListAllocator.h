#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"
#include "GC/Allocator/StackAllocator.h"

namespace gc{
	template<size_t ChunkSize>
	class ListAllocator{
		class _Node{
			_Node * _next;
			_Node * _prev;
			StackAllocator<ChunkSize> _alloc;
		};
		_Node * _first;
		_Node * _last;
	public:
		ListAllocator();
		memory::Slice allocate(priv::bytes_t);
		bool dealocate(const memory::Slice &) noexcept;

		bool isOwn(const memory::Slice &) const noexcept;
	};
	ListAllocator::ListAllocator():
		_first(new _Node()), _last(_first)
	{}
	memory::Slice ListAllocator::allocate(priv::bytes_t bs){
		if (bs.value > ChunkSize)
			return memory::Slice::null;
		memory::Slice result;
		for (auto i = _first; i != nullptr; ++i)
		{
			result = i->allocate(bs);
			if (result != memory::Slice::null)
				return result;
		}
		_last->_next = new _Node();
		_last = _last->_next;
		return _last->allocate(bs);
	}
	bool ListAllocator::dealocate(const memory::Slice & blk) noexcept{
		for (auto i = _first; i != nullptr; ++i)
			if (i->deallocate(blk))
				return true;
		return false;	//it's not owr memory
	}
	bool ListAllocator::isOwn(const memory::Slice & blk) const noexcept{
		for (auto i = _first; i != nullptr; ++i)
			if (i->isOwn(blk))
				return true;
		return false;
	}
}