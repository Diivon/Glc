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
			bool isEmpty(){return _alloc.isEmpty();}
		};
		_Node * _first;
		_Node * _last;
		inline void _cutNode(_Node & n){
			if (!n._prev){//if n == _first
				if (!n._next)
					return;
			}
			else{
				n._prev->_next = n._next;
				if (n._next)
					n._next->_prev = n._prev;
			}
		}
	public:
		ListAllocator();
		Optional<memory::Slice> allocate(sh::priv::bytes_t) noexcept;
		memory::Slice _alloc(sh::priv::bytes_t) noexcept;
		bool deallocate(const memory::Slice &) noexcept;
	};
	template<size_t ChunkSize>
	inline ListAllocator<ChunkSize>::ListAllocator():
		_first(new _Node()), _last(_first)
	{}
	template<size_t ChunkSize>
	inline Optional<memory::Slice> ListAllocator<ChunkSize>::allocate(sh::priv::bytes_t bs) noexcept{
		auto res = _alloc(bs);
		if (res.begin)
			return res;
		else return std::bad_alloc();
	}
	template<size_t ChunkSize>
	memory::Slice ListAllocator<ChunkSize>::_alloc(sh::priv::bytes_t bs) noexcept{
		if (bs.value > ChunkSize)
			return memory::Slice::null;
		memory::Slice result = _first->_alloc._alloc(bs);
		for (auto i = _first->_next; i != nullptr; i = i->_next)	//walking through our nodes, and looking for available memory
		{
			result = i->_alloc._alloc(bs);
			if (result.begin)										//if failed, goto next
				return result;
		}
		//if memory was found in any node, control flow will return earlier
		try{ _last->_next = new _Node(); }					//allocate new node with "new"
		catch(...){ 	return memory::Slice::null; }		//on fail return reason (std::bad_alloc)
		_last = _last->_next;
		return _last->_alloc._alloc(bs);					//and in new node we guaranteed find requested memory
	}
	template<size_t ChunkSize>
	inline bool ListAllocator<ChunkSize>::deallocate(const memory::Slice & blk) noexcept{
		for (auto i = _first; i != nullptr; i = i->_next)
			if (i->_alloc.deallocate(blk)){
				if (i->isEmpty())
					_cutNode(*i);
				return true;
			}
		return false;	//it's not owr memory
	}
}