#pragma once
#include "GC/Utils.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"
#include "GC/Allocator/StackAllocator.h"

namespace gc{
	template<size_t ChunkSize>
	class ListAllocator{
		struct _Node{
			_Node * _next;
			_Node * _prev;
			StackAllocator<ChunkSize> _alloc;
		};
		_Node * _first;
		_Node * _last;
	public:
		ListAllocator();
		memory::Slice allocate(priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
		bool isOwn(const memory::Slice &) const noexcept;
	};
	template<size_t ChunkSize>
	ListAllocator<ChunkSize>::ListAllocator():
		_first(new _Node()), _last(_first)
	{}
	template<size_t ChunkSize>
	memory::Slice ListAllocator<ChunkSize>::allocate(priv::bytes_t bs) noexcept{
		if (bs.value > ChunkSize)
			return memory::Slice::null;
		memory::Slice result;
		for (auto i = _first; i != nullptr; ++i)//walking through our nodes, and looking for available memory
		{
			result = i->_alloc.allocate(bs);
			if (result != memory::Slice::null)	//if failed, goto next
				return result;
		}
		//if memory was found in any node, control flow will return earlier
		try{ 		_last->_next = new _Node(); }	//allocate new node with "new"
		catch(...){ 	return memory::Slice::null; }	//on fail return null
		_last = _last->_next;
		return _last->_alloc.allocate(bs);	//and in new node we guaranteed find requested memory
	}
	template<size_t ChunkSize>
	bool ListAllocator<ChunkSize>::deallocate(const memory::Slice & blk) noexcept{
		for (auto i = _first; i != nullptr; ++i)
			if (i->_alloc.deallocate(blk))
				return true;
		return false;	//it's not owr memory
	}
	template<size_t ChunkSize>
	bool ListAllocator<ChunkSize>::isOwn(const memory::Slice & blk) const noexcept{
		for (auto i = _first; i != nullptr; i = i->_next)
			if (i->_alloc.isOwn(blk))
				return true;
		return false;
	}
}