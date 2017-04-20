#pragma once
#include <cstring>
#include <exception>
#include <iterator>
#include "GC/Utils.h"
#include "GC/Allocator.h"
#include "GC/Optional.h"

namespace gc
{
	namespace priv{
		template<class I, template<class T, class A> class C>
		struct stringMake2{
			gc::Optional<C<I, void>> get();
		};
		template<class I, template<class T> class C>
		struct stringMake1{
			gc::Optional<C<I>> get();
		};
	}
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
				auto len = sl._data.getDifference() / sizeof(T);
				return String<T>(static_cast<T *>(sl._data.begin), len);
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
		template<class Y>
		Optional<Y> as() const { return _AsHelper<Y>::get(*this); }
	};
	template<class T, class Alloc>
	class String: public ClassTraits<String<T, Alloc>>
	{
		memory::Slice _data;
		//friends
		template<class I, template<class T, class A> class C>
		friend struct priv::stringMake2;
		template<class I, template<class T> class C>
		friend struct priv::stringMake1;
		//helpers for 'as'
		template<class Y>
		struct _AsHelper {
			inline static Y get(String<T, Alloc> const &);
		};
		template<>
		struct _AsHelper<Int> {
			static inline Optional<Int> get(String<T, Alloc> const & str) {
				IF_FAIL( return Int(std::stoi(static_cast<T *>(str._data.begin))) ){
					return fail_exception;
				}
			}
		};
		template<>
		struct _AsHelper<Size_t> {
			static inline Optional<Size_t> get(String<T, Alloc> const & str) {
				IF_FAIL( std::stoul(static_cast<char *>(str._data.begin)) ){
					return fail_exception;
				}
			}
		};
		T * _getPtrTo(priv::first_t<T>) const noexcept;
		T * _getPtrTo(priv::last_t<T>) const noexcept;

		class _Iter: public std::iterator<std::random_access_iterator_tag, T>{
			T * _data;
			_Iter(T * d):_data(d){}
			friend class String<T, Alloc>;
		public:
			reference operator *(){return *_data;}
			void operator ++(){++_data;}
			void operator --(){--_data;}
			bool operator !=(const _Iter & a){return _data != a._data;}
		};
		class _CIter: public std::iterator<std::random_access_iterator_tag, const T>{
			const T * _data;
		public:
			const reference operator *()const noexcept{return _data;}
			void operator ++()noexcept{++_data;}
			void operator --()noexcept{--_data;}
			bool operator !=(const _Iter & a)const noexcept{return _data != a._data;}
		};
	public:
		using value_type = T;
		using size_type = size_t;
		using difference_type = ptrdiff_t;
		using reference = T &;
		using const_reference = const T &;
		using iterator = _Iter;
		using const_iterator = _CIter;
		//don't know what to do with other iterators

		String();
		String(const T *);
		String(const T *, size_t);
		String(c_lref_t s);
		String(rref_t s) noexcept;
		~String() noexcept;
		const StringSlice<T> toSlice() const noexcept;
		const char * const 	c_string() const noexcept;

		const Optional<Size_t> getIndexOf(priv::first_t<T> &&) const noexcept;
		const Optional<Size_t> getIndexOf(priv::last_t<T> &&) const noexcept;
		const Size_t 		getCountOf(T) const noexcept;
		template<class Y>
		const Bool 			isContain(Y &&) const noexcept;
		const Optional<T> 	getElementAt(Size_t) const;
			  Optional<T> 	getElementAt(Size_t);
		const Bool 			isEqual(c_lref_t) const noexcept;
		const Size_t 		getLength() const noexcept;

		const T & 			operator [] (Size_t) const;
			  T & 			operator [] (Size_t);
		const Bool 			operator == (c_lref_t) const noexcept;
		const Bool 			operator != (c_lref_t) const noexcept;

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
		C<T> 			split();
		StringSlice<T> 	trim() const noexcept;
		StringSlice<T> 	trimBegin() const noexcept;
		StringSlice<T> 	trimEnd() const noexcept;

		iterator 		begin(){return iterator(static_cast<T *>(_data.begin));}
		iterator 		end(){
			return iterator(static_cast<T *>(_data.begin) + getLength().as<size_t>());
		}

		template<class Y>
		Optional<Y> as() const {
			return _AsHelper<Y>::get(*this);
		}
		template<template<class I, class A>class C>
		auto as(){
			return priv::stringMake2<T, C>::get(*this);
		}
		template<template<class I>class C>
		auto as() {
			return priv::stringMake1<T, C>::get(*this);
		}
		inline rref_t move() noexcept {
			return std::move(*this);
		}
	};
	namespace priv{
		template<class T>
		struct stringMake1<T, gc::StringSlice> {
			static inline gc::Optional<gc::StringSlice<T>> get(gc::String<T> const & s) {
				gc::StringSlice<T> result(s._data.begin, static_cast<T *>(s._data.end) - 1);
				return result;
			}
		};
		template<class T>
		struct stringMake2<T, std::vector>{
			static inline gc::Optional<std::vector<T>> get(gc::String<T> const & s){
				std::vector<T> result;
				s.cforeach([&result](auto const & i){result.emplace_back(i);});
				return result;
			}
		};
		template<class T>
		struct stringMake2<T, std::list>{
			static inline gc::Optional<std::list<T>> get(gc::String<T> const & s){
				std::list<T> result;
				s.cforeach([&result](auto const & i){result.emplace_back(i);});
				return result;
			}
		};
	}
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    STRING IMPLEMENTATION AREA                             |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class T>
	inline StringSlice<T>::StringSlice(const memory::Slice & ms) noexcept:
		_data(ms)
	{}
	inline std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl){
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
		_data(Alloc::allocate(bytes(s.getLength().as<size_t>() + 1)).unwrap())
	{
		T * ptr = static_cast<T *>(_data.begin);
		for(T * i = static_cast<T *>(s._data.begin); i <= s._data.end; ++i, ++ptr)
			*ptr = *i;
	}
	//												move ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(typename String<T, Alloc>::rref_t s) noexcept:
		_data(s._data)
	{
		s._data = memory::Slice::null;
	}
	//												destructor
	template<class T, class Alloc>
	inline String<T, Alloc>::~String(){
		if (_data.begin)
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
	inline const Optional<T> String<T, Alloc>::getElementAt(Size_t i) const{
		if (i > this->getLength())
			return std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline Optional<T> String<T, Alloc>::getElementAt(Size_t i){
		if (i > this->getLength())
			return std::out_of_range();
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
}