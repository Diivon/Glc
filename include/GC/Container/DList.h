#pragma once
#include "GC/Allocator.h"
#include "GC/Utils.h"
#include "GC/Optional.h"

namespace gc{
	template<class T, class Alloc = gc::Allocator>
	class DList: public ClassTraits<DList<T, Alloc>>{
		struct _Node{
			_Node * _next;
			_Node * _prev;
			memory::Slice _sl;
			T _data;
			template<class ... Args>
			_Node(_Node * n, _Node * p, memory::Slice const & sl, Args && ... args):
				_next(n), _prev(p), _sl(sl), _data(std::forward<Args>(args)...)
			{}
		};
		_Node * _first, * _last;
		size_t _len;
			class _it{
				_Node * _data;
				template<class Y, class YY>
				friend class DList;
				_it(_Node * a):_data(a){}
			public:
				T & operator *(){return _data->_data;}// )))
				void operator ++(){_data = _data->_next;}
				void operator --(){_data = _data->_prev;}
				bool operator != (_it const & i){return _data != i._data;}
			};
		public:
			typedef _it iterator;
			DList();
			~DList();
			DList(c_lref_t);
			DList(DList &&) noexcept;
			lref_t operator = (c_lref_t);
			lref_t operator = (rref_t) noexcept;

			template<class ... Args>
			Optional<iterator> emplaceBack(Args && ...);
			lref_t insert(lref_t) noexcept;

			iterator begin(){
				iterator res;
				res._data = _first;
				return res;
			}
			iterator end(){
				iterator res;
				res._data = nullptr;
				return res;
			}

			template<class F>
			lref_t foreach(F &&);
			template<class F>
			c_lref_t cforeach(F &&) const;
			template<class F>
			this_t map(F &&) const;
	};
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                        DList IMPLEMENTATION AREA                          |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class T, class Alloc>
	DList<T, Alloc>::DList():
		_first(nullptr), _last(nullptr), _len(0)
	{}
	template<class T, class Alloc>
	DList<T, Alloc>::DList(typename DList<T, Alloc> && other) noexcept
	{
		std::swap(_first, other._first);
		std::swap(_last, other._last);
		std::swap(_len, other._len);
	}
	template<class T, class Alloc>
	DList<T, Alloc>::~DList(){
		for(_Node * i = _first; i != nullptr; i = i->_next){
			i->~_Node();
			Alloc::deallocate(i->_sl);
		}
	}
	template<class T, class Alloc>
	template<class ... Args>
	Optional<typename DList<T, Alloc>::iterator> DList<T, Alloc>::emplaceBack(Args && ... args){
		IF_FAIL(
			if (!_len){
				auto sl = Alloc::allocate(bytes(sizeof(_Node))).unwrap();
				_first = static_cast<_Node *>(sl.begin);
				_last = _first;
				new(_first) _Node(_last, nullptr, sl, std::forward<Args>(args)...);
			}
			else{
				auto sl = Alloc::allocate(bytes(sizeof(_Node))).unwrap();
				_Node * newNode = static_cast<_Node *>(sl.begin);
				new(newNode) _Node(nullptr, _last, sl, std::forward<Args>(args)...);
				_last->_next = newNode;
				_last = newNode;
			}
			++_len;
			return iterator(_last);
		){
			return fail_exception;
		}
	}
	template<class T, class Alloc>
	typename DList<T, Alloc>::lref_t DList<T, Alloc>::insert(typename DList<T, Alloc>::lref_t other) noexcept{
		_last->_next = other._first;
		other._first->_prev = _last;

		other._first = nullptr;
		other._last = nullptr;
		other._len = 0;
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	typename DList<T, Alloc>::lref_t DList<T, Alloc>::foreach(F && f){
		for(_Node * i = _first; i != nullptr; i = i->_next)
			f(i->_data);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	typename DList<T, Alloc>::c_lref_t DList<T, Alloc>::cforeach(F && f) const{
		for(_Node * i = _first; i != nullptr; i = i->_next)
			f(i->_data);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	typename DList<T, Alloc>::this_t DList<T, Alloc>::map(F && f) const{
		this_t result;
		for(_Node * i = _first; i != nullptr; i = i->_next)
			result.emplaceBack(f(i->_data));
		return result;
	}
}