#pragma once
#include "GC/Utils.h"
#include "GC/Allocator.h"
#include "GC/Optional.h"
#include <cstring>
#include <exception>

namespace gc
{
	template<class T, class Alloc = gc::Allocator>
	class String;
	template<class T>
	class StringSlice: public ClassTraits<StringSlice<T>>{
		memory::Slice _data;
		template<class Y>
		struct _AsHelper{
			inline static Y get(StringSlice<T> const &);
		};
		template<>
		struct _AsHelper<String<T>>{
			inline static auto get(StringSlice<T> const & sl){
				return String<T>(static_cast<T *>(sl._data.begin), sl._data.getDifference() / sizeof(T));
			}
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
		template<class Y>
		Y as() const { return _AsHelper<Y>::get(*this); }
	};
	template<class T, class Alloc>
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
		String(const T *, size_t);
		String(c_lref_t s);
		String(rref_t s);
		~String();
		const StringSlice<T> toSlice() const noexcept;
		const char * const c_string() const noexcept;

		const Optional<Size_t> getIndexOf(priv::first_t<T> &&) const noexcept;
		const Optional<Size_t> getIndexOf(priv::last_t<T> &&) const noexcept;
		const Size_t getCountOf(T) const noexcept;
		template<class Y>
		const Bool isContain(Y &&) const noexcept;
		const T getElementAt(Size_t) const;
			  T getElementAt(Size_t);
		const Bool isEqual(c_lref_t) const noexcept;
		const Size_t getLength() const noexcept;

		const T & operator [] (Size_t) const;
			  T & operator [] (Size_t);
		const Bool operator == (c_lref_t) const noexcept;
		const Bool operator != (c_lref_t) const noexcept;

		Optional<StringSlice<T>> getSubstring(priv::to_t<int>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::from_t<int>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::from_t<int>, priv::to_t<int>) const noexcept;
		//--------------
		Optional<StringSlice<T>> getSubstring(priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::to_t<int>{to.value});}
		Optional<StringSlice<T>> getSubstring(priv::from_t<Int> from) const noexcept{return this->getSubstring(priv::from_t<int>{from.value});}
		Optional<StringSlice<T>> getSubstring(priv::from_t<Int> from, priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::from_t<int>{from.value}, priv::to_t<int>{to.value});}
		//--------------
		Optional<StringSlice<T>> getSubstring(priv::to_t<size_t>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::from_t<size_t>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::from_t<size_t>, priv::to_t<size_t>) const noexcept;
		//--------------
		Optional<StringSlice<T>> getSubstring(priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::to_t<size_t>{to.value});}
		Optional<StringSlice<T>> getSubstring(priv::from_t<Size_t> from) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value});}
		Optional<StringSlice<T>> getSubstring(priv::from_t<Size_t> from, priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value}, priv::to_t<size_t>{to.value});}
		//--------------
		Optional<StringSlice<T>> getSubstring(priv::fromFirst_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::fromLast_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::toFirst_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::toLast_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::fromFirst_t<T>, priv::toFirst_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::fromLast_t<T>, priv::toFirst_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::fromFirst_t<T>, priv::toLast_t<T>) const noexcept;
		Optional<StringSlice<T>> getSubstring(priv::fromLast_t<T>, priv::toLast_t<T>) const noexcept;
		
		template<template<class Y> class C>
		C<T> split();
		StringSlice<T> trim() const noexcept;
		StringSlice<T> trimBegin() const noexcept;
		StringSlice<T> trimEnd() const noexcept;
		
		template<class F>
		lref_t foreach(F &&);
		template<class F>
		c_lref_t cforeach(F &&) const;
		template<class F>
		this_t map(F &&) const;

		template<class Y>
		Optional<Y> as() const {
			return _AsHelper<Y>::get(*this);
		}
	private:
		T * _getPtrTo(priv::first_t<T>) const noexcept;
		T * _getPtrTo(priv::last_t<T>) const noexcept;
		template<>
		struct _AsHelper<Int> {
			static inline Optional<Int> get(String<T, Alloc> const & str) {
				try {
					return Int(std::stoi(static_cast<T *>(str._data.begin)));
				}
				catch (std::exception & e){
					return e;
				}
			}
		};
		template<>
		struct _AsHelper<Size_t> {
			static inline Size_t get(String<T, Alloc> const & str) {
				return std::stoul(static_cast<char *>(str._data.begin));
			}
		};
		template<>
		struct _AsHelper<std::vector<T>> {
			static inline auto get(String<T, Alloc> const & str) {
				std::vector<T> result;
				result.reserve(str.getLength().as<size_t>());
				str.cforeach([&result](auto const & c) {result.emplace_back(c); });
				return result;
			}
		};
		template<template<class Y> class C>
		struct _AsTmplHelper{
			static inline C<T> get(String<T, Alloc> const & str);
		};
	};

	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    STRING IMPLEMENTATION AREA                             |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class T>
	inline StringSlice<T>::StringSlice(const memory::Slice & ms) noexcept:
		_data(ms)
	{}
	std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl){
			if (!sl.isReversed())
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr <= sl._data.end; ++ptr)
					os.put(*ptr);
			else
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr >= sl._data.end; --ptr)
					os.put(*ptr);
			return os;
		}
	template<class T>
	typename StringSlice<T>::lref_t StringSlice<T>::reverse() noexcept {
		std::swap(_data.begin, _data.end);
		return *this;
	}
	template<class T>
	typename StringSlice<T>::this_t StringSlice<T>::getReversed() const noexcept {
		return StringSlice<T>(memory::Slice{ _data.end, _data.begin });
	}
	template<class T>
	inline Bool StringSlice<T>::isReversed() const noexcept {
		return _data.begin > _data.end;
	}
	template<class T>
	template<class F>
	typename StringSlice<T>::lref_t StringSlice<T>::foreach(F && f){
		if (!this->isReversed())
			for(const T * ptr = static_cast<decltype(ptr)>(_data.begin); ptr <= _data.end; ++ptr)
				f(*ptr);
		else
			for(const T * ptr = static_cast<decltype(ptr)>(_data.begin); ptr >= _data.end; --ptr)
				f(*ptr);
		return *this;
	}

	//STRING---STRING---STRING---STRING---STRING---STRING---STRING---STRING

	//												default ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String():
		_data(memory::Slice::null)
	{}
	//												const char * ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(const T * ptr):
		_data(Alloc::allocate(bytes(strlen(ptr) + 1)).unwrap())
	{
		auto diff = _data.getDifference();
		strcpy_s(static_cast<char *>(_data.begin), diff, ptr);
	}
	//												const char *, size_t ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(const T * ptr, size_t len):
		_data(Alloc::allocate(bytes(len + 1)).unwrap())
	{
		memcpy(_data.begin, ptr, len + 1);
	}
	//												copy ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(typename String<T, Alloc>::c_lref_t s):
		_data(Alloc::allocate(bytes(s.getLength() + 1)).unwrap())
	{
		//TODO: allocator must throw
		T * ptr = static_cast<T *>(_data.begin);
		for(T * i = static_cast<T *>(s._data.begin); i <= s._data.end; ++i, ++ptr)
			*ptr = *i;
	}
	//												move ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(typename String<T, Alloc>::rref_t s):
	{
		std::swap(_data.begin, s._data.begin);
		std::swap(_data.end, s._data.end);
	}
	template<class T, class Alloc>
	inline String<T, Alloc>::~String(){
		Alloc::deallocate(_data);
	}
	template<class T, class Alloc>
	inline const StringSlice<T> String<T, Alloc>::toSlice() const noexcept{
		if (_data.begin)
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.end) - 1);
		return StringSlice<T>(memory::Slice::null);
	}
	template<class T, class Alloc>
	const char * const String<T, Alloc>::c_string() const noexcept{
		return static_cast<const char * const>(_data.begin);
	}
	template<class T, class Alloc>
	inline const Optional<Size_t> String<T, Alloc>::getIndexOf(priv::first_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return std::invalid_argument();
	}
	template<class T, class Alloc>
	inline const Optional<Size_t> String<T, Alloc>::getIndexOf(priv::last_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i > _data.begin; --i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}
	template<class T, class Alloc>
	const Size_t String<T, Alloc>::getCountOf(T d) const noexcept{
		Size_t result = 0;
		for (auto ptr = static_cast<T *>(_data.begin); ptr < _data.end; ++ptr)
			if (*ptr == d)
				++result;
		return result;
	}
	template<class T, class Alloc>
	template<class Y>
	inline const Bool String<T, Alloc>::isContain(Y && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t) return true;
		return false;
	}
	template<class T, class Alloc>
	inline const T String<T, Alloc>::getElementAt(Size_t i) const{
		if (i > this->getLength())
			throw std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline T String<T, Alloc>::getElementAt(Size_t i){
		if (i > this->getLength())
			throw std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::isEqual(typename String<T, Alloc>::c_lref_t s) const noexcept{
		return !strcmp(static_cast<char *>(_data.begin), static_cast<char *>(s._data.begin));
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getLength() const noexcept{
		return (static_cast<T *>(_data.end) - static_cast<T *>(_data.begin)) - 1;
	}
	template<class T, class Alloc>
	inline const T & String<T, Alloc>::operator[] (Size_t i) const{
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline T & String<T, Alloc>::operator[] (Size_t i){
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::operator== (typename String<T, Alloc>::c_lref_t s) const noexcept {
		return this->isEqual(s);
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::operator!= (typename String<T, Alloc>::c_lref_t s) const noexcept {
		return !(this->isEqual(s));
	}
	//+-------------------------------------------------------------------------------------------+
	//|                             Get Substring Area                                            |
	//+-------------------------------------------------------------------------------------------+
	template<class T, class Alloc>
	T * String<T, Alloc>::_getPtrTo(priv::first_t<T> first) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); *i; ++i)//while not string terminator
			if (*i == first.value)
				return i;
		return nullptr;
	}
	template<class T, class Alloc>
	T * String<T, Alloc>::_getPtrTo(priv::last_t<T> last) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i >= _data.begin; --i)
			if (*i == last.value)
				return i;
		return nullptr;
	}
	template<class T, class Alloc>
	inline Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::to_t<int> to) const noexcept {
		int len = this->getLength().as<int>();
		int minusLen = this->getLength().as<int>() * -1;
		if (to.value > len || to.value < minusLen)
			return std::invalid_argument(__FUNCTION__);

		if (to.value >= 0)
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.begin) + to.value);
		else //value is negative
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.end) + to.value - 1);
	}
	template<class T, class Alloc>
	inline Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::from_t<int> from) const noexcept {
		int len = this->getLength().as<int>();
		int minusLen = this->getLength().as<int>() * -1;
		if (from.value > len || from.value < minusLen)
			return std::invalid_argument(__FUNCTION__);

		if (from.value >= 0)
			return StringSlice<T>(static_cast<T *>(_data.begin) + from.value, static_cast<T *>(_data.end) - 2);
		else
			return StringSlice<T>(static_cast<T *>(_data.end) - 1 + from.value, static_cast<T *>(_data.end) - 2);
	}
	template<class T, class Alloc>
	inline Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::from_t<int> from, priv::to_t<int> to) const noexcept {
		int len = this->getLength().as<int>();
		int minusLen = this->getLength().as<int>() * -1;
		if (from.value > len || from.value < minusLen)
			return std::invalid_argument(__FUNCTION__);

		memory::Slice result = { nullptr, nullptr };
		if (from.value >= 0)
			result.begin = static_cast<T *>(_data.begin) + from.value;
		else
			result.begin = static_cast<T *>(_data.end) + from.value - 1;

		if (to.value > len || to.value < minusLen)
			return std::invalid_argument(__FUNCTION__);
		if (to.value >= 0)
			result.end = static_cast<T *>(_data.begin) + to.value;
		else
			result.end = static_cast<T *>(_data.end) + to.value - 1;
		return result;
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromFirst_t<T> from) const noexcept{
		auto res = _getPtrTo(priv::first_t<T>{ from.value });
		if (res)
			return StringSlice<T>(res, static_cast<T *>(_data.end) - 1);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromLast_t<T> from) const noexcept{
		auto res = _getPtrTo(priv::last_t<T>{ from.value });
		if (res)
			return StringSlice<T>(res, static_cast<T *>(_data.end) - 1);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::toFirst_t<T> to) const noexcept{
		auto res = _getPtrTo(priv::first_t<T>{ to.value });
		if (res)
			return StringSlice<T>(static_cast<T *>(_data.begin), res);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::toLast_t<T> to) const noexcept{
		auto res = _getPtrTo(priv::last_t<T>{ to.value });
		if (res)
			return StringSlice<T>(static_cast<T *>(_data.begin), res);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fromRes = _getPtrTo(priv::first_t<T>{ from.value });
		auto toRes =   _getPtrTo(priv::first_t<T>{ to.value });
		if (fromRes && toRes)
			return StringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromLast_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::last_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::first_t<T>{ to.value });
		if (fromRes && toRes)
			return StringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toLast_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::first_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::last_t<T>{ to.value });
		if (fromRes && toRes)
			return StringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<StringSlice<T>> String<T, Alloc>::getSubstring(priv::fromLast_t<T> from, priv::toLast_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::last_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::last_t<T>{ to.value });
		if (fromRes && toRes)
			return StringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	
	//+-------------------------------------------------------------------------------------------+
	//|                             Get Substring Area End                                        |
	//+-------------------------------------------------------------------------------------------+


	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::trim() const noexcept{
		T * firstPtr = static_cast<T *>(_data.begin);
		while (*firstPtr == ' ' || *firstPtr == '\t' || *firstPtr == '\n')
			++firstPtr;
		T * lastPtr = static_cast<T *>(_data.end) - 2;
		while (*lastPtr == ' ' || *lastPtr == '\t' || *lastPtr == '\n')
			--lastPtr;
		return StringSlice<T>(firstPtr, lastPtr);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::trimBegin() const noexcept{
		T * firstPtr = static_cast<T *>(_data.begin);
		while (*firstPtr == ' ' || *firstPtr == '\t' || *firstPtr == '\n')
			++firstPtr;
		return StringSlice<T>(firstPtr, static_cast<T *>(_data.end) - 2);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::trimEnd() const noexcept{
		T * lastPtr = static_cast<T *>(_data.end) - 2;
		while (*lastPtr == ' ' || *lastPtr == '\t' || *lastPtr == '\n')
			--lastPtr;
		return StringSlice<T>(_data.begin, lastPtr);
	}


	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::lref_t String<T, Alloc>::foreach(F && f){
		for(T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			f(*i);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::c_lref_t String<T, Alloc>::cforeach(F && f) const{
		for(T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			f(*i);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::this_t String<T, Alloc>::map(F && f) const{
		this_t result = *this;
		for(T * ptr = static_cast<T *>(_data.begin), T * i = static_cast<T *>(result._data.begin); i < _data.end; ++i, ++ptr)
			*i = f(*ptr);
		return *this;
	}
}