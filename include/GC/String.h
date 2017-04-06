#pragma once
#include "GC/Utils.h"
#include "GC/Allocator.h"
#include <cstring>
#include <exception>

namespace gc
{
	template<class T>
	class StringSlice: public ClassTraits<StringSlice<T>>{
		memory::Slice _data;
		template<class Y>
		struct _AsHelper{
			inline static Y get(StringSlice<T> const &);
		};
	public:
		StringSlice(T * b, T * e): _data{b, e} {}
		StringSlice(void * b, void * e) : _data{ b, e } {}
		StringSlice(const memory::Slice &) noexcept;
		Bool isReversed() const noexcept;
		lref_t reverse() noexcept;
		this_t getReversed() const noexcept;
		friend std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl);

		template<class F>
		lref_t foreach(F &&);
		template<class F>
		c_lref_t cforeach(F &&);
		template<class F>
		this_t map(F &&);
		template<class F>
		lref_t filter(F &&);
		template<class F>
		this_t select(F &&);
		template<class T>
		T as() const { return _AsHelper<Y>::get(*this); }
	};
	template<class T, class Alloc = gc::Allocator>
	class String: public ClassTraits<String<T, Alloc>>
	{
		memory::Slice _data;
		template<class Y>
		struct _AsHelper {
			inline static Y get(String<T, Alloc> const &);
		};
	public:
		String();
		String(const T *);
		String(c_lref_t s);
		String(rref_t s);
		~String();
		friend std::ostream & operator << (std::ostream & os, const String<T, Alloc> & s);
		const StringSlice<T> toSlice() const noexcept;

		const Size_t getIndexOf(priv::first_t<T> &&) const noexcept;
		const Size_t getIndexOf(priv::last_t<T> &&) const noexcept;
		template<class Y>
		const Bool isContain(Y &&) const noexcept;
		const T getElementAt(Size_t) const;
			  T getElementAt(Size_t);
		const Bool isEqual(c_lref_t) const noexcept;
		const Size_t getLength() const noexcept;

		const T operator [] (Size_t) const;
			  T operator [] (Size_t);
		const Bool operator == (c_lref_t) const noexcept;
		const Bool operator != (c_lref_t) const noexcept;

		StringSlice<T> getSubstring(priv::to_t<int>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<int>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<int>, priv::to_t<int>) const noexcept;
		//--------------
		StringSlice<T> getSubstring(priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::to_t<int>{to.value});}
		StringSlice<T> getSubstring(priv::from_t<Int> from) const noexcept{return this->getSubstring(priv::from_t<int>{from.value});}
		StringSlice<T> getSubstring(priv::from_t<Int> from, priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::from_t<int>{from.value}, priv::to_t<int>{to.value});}
		//--------------
		StringSlice<T> getSubstring(priv::to_t<size_t>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<size_t>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<size_t>, priv::to_t<size_t>) const noexcept;
		//--------------
		StringSlice<T> getSubstring(priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::to_t<size_t>{to.value});}
		StringSlice<T> getSubstring(priv::from_t<Size_t> from) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value});}
		StringSlice<T> getSubstring(priv::from_t<Size_t> from, priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value}, priv::to_t<size_t>{to.value});}
		//--------------
		StringSlice<T> getSubstring(priv::fromFirst_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromLast_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromFirst_t<T>, priv::toFirst_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromLast_t<T>, priv::toFirst_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromFirst_t<T>, priv::toLast_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromLast_t<T>, priv::toLast_t<T>) const noexcept;
		
		template<template<class Y> class C>
		C<T> split();
		StringSlice<T> trim() const noexcept;
		StringSlice<T> trimBegin() const noexcept;
		StringSlice<T> trimEnd	() const noexcept;
		
		template<class F>
		lref_t foreach(F &&);
		template<class F>
		c_lref_t cforeach(F &&) const;
		template<class F>
		this_t map(F &&) const;

		template<class Y>
		auto as() const {
			return _AsHelper<Y>::get(*this);
		}
		template<template<class Y> class C>
		auto as() const{
			return _AsTmplHelper<C>::get(*this);
		}
	private:
		template<>
		struct _AsHelper<Int> {
			static inline Int get(String<T, Alloc> const & str) {
				return Int(std::stoi(static_cast<char *>(str._data.begin)));
			}
		};
		template<>
		struct _AsHelper<Size_t> {
			static inline Size_t get(String<T, Alloc> const & str) {
				return static_cast<size_t>(std::stoi(static_cast<char *>(str._data.begin)));
			}
		};
		template<>
		struct _AsHelper<std::vector<T>>
		{
			static inline std::vector<T> get(String<T, Alloc> const & str){
				std::vector<T> result;
				result.reserve(str.getLength());
				str.cforeach([&result](auto const & c){result.emplace_back(c);});
				return result;
			}
		};
	};
}
#include "GC/String_impl.h"