#pragma once
#include <new>
#include "GC/Utils.h"
#include "GC/Numerics.h"
#include "GC/Optional.h"
#include "GC/Allocator.h"

namespace gc{
	template<class T, class Alloc = gc::Allocator>
	class Container: public ClassTraits<Container<T, Alloc>>{
		memory::Slice _data;
		template<class Y,template<class YY, class YYY> class A>
		struct _AsHelper{
			static inline auto get();
		};
		template<class Y>
		struct _AsHelper<Y, std::vector>{
			static inline auto get(Container const & c){
				std::vector result;
				result.assign(static_cast<Y *>(c._data.begin), static_cast<Y *>(c._data.end) + c.getLength());
				return result;
			}
		};
	public:
		Container();
		Container(c_lref_t);
		Container(Container<T, Alloc> &&);

		Container(T *, size_t);
		template<class ... Args>
		Container(size_t, Args ...);
		~Container();

		lref_t clearContent() noexcept(noexcept(std::declval<T>().~T()));
		template<class F>
		lref_t clearContent(F &&);

		size_t getLength() const noexcept;
		T const & operator [] (size_t) const;
		T & 	  operator [] (size_t);
		Optional<T const &> getAt(size_t) const;
		Optional<T &>		getAt(size_t);

		template<template<class Y, class A> class C>
		auto as() const{
			return _AsHelper<T, C>::get();
		}
	};
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    CONTAINER IMPLEMENTATION AREA                          |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class T, class Alloc>
	Container<T, Alloc>::Container():
		_data(memory::Slice::null)
	{}
	template<class T, class Alloc>
	Container<T, Alloc>::Container(c_lref_t other):
		_data(Alloc::allocate(bytes(other.getLength() * sizeof(T))).unwrap())
	{
		for(size_t i = 0; i < other.getLength(); ++i)
			new(static_cast<T *>(_data.begin) + i) T(static_cast<T *>(other._data.begin)[i]);
	}
	template<class T, class Alloc>
	Container<T, Alloc>::Container(Container<T, Alloc> && other):
		_data(other._data)
	{
		other._data = memory::Slice::null;
	}
	template<class T, class Alloc>
	Container<T, Alloc>::Container(T * ptr, size_t len):
		_data(ptr, ptr + len)
	{}
	template<class T, class Alloc>
	template<class ... Args>
	Container<T, Alloc>::Container(size_t len, Args ... args):
		_data(Alloc::allocate(bytes(len * sizeof(T))).unwrap())
	{
		for (size_t i = 0; i < len; ++i)
			new(static_cast<T *>(_data.begin) + i) T(std::forward<Args>(args)...);
	}
	template<class T, class Alloc>
	Container<T, Alloc>::~Container(){}

	template<class T, class Alloc>
	typename Container<T, Alloc>::lref_t Container<T, Alloc>::clearContent() noexcept(noexcept(std::declval<T>().~T())) {
		for (size_t i = 0; i < _data.getDifference() / sizeof(T); ++i)
			static_cast<T *>(_data.begin)[i].~T();
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	typename Container<T, Alloc>::lref_t Container<T, Alloc>::clearContent(F && f){
		for (size_t i = 0; i < _data.getDifference() / sizeof(T); ++i)
			f(static_cast<T *>(_data.begin)[i]);
		return *this;
	}
	template<class T, class Alloc>
	size_t Container<T, Alloc>::getLength() const noexcept{
		return _data.getDifference() / sizeof(T);
	}
	template<class T, class Alloc>
	const T & Container<T, Alloc>::operator [] (size_t i) const{
		return static_cast<T *>(_data.begin)[i];
	}
	template<class T, class Alloc>
	T & Container<T, Alloc>::operator [] (size_t i){
		return static_cast<T *>(_data.begin)[i];
	}
	template<class T, class Alloc>
	Optional<T const &> Container<T, Alloc>::getAt(size_t i) const {
		if (i > getLength())
			return std::out_of_range();
		return static_cast<T *>(_data.begin)[i];
	}
	template<class T, class Alloc>
	Optional<T &> Container<T, Alloc>::getAt(size_t i) {
		if (i > getLength())
			return std::out_of_range(__FUNCTION__);
		return static_cast<T *>(_data.begin)[i];
	}
}