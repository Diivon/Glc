#pragma once
#include <cstring>
#include <exception>
#include <iterator>
#include "GC/Utils.h"
#include "GC/Allocator.h"
#include "GC/Optional.h"
#include "GC/StringSlice.h"
#include "GC/Numerics.h"

namespace gc
{
	template<class T, class Alloc>
	class BasicString: public ClassTraits<BasicString<T, Alloc>>
	{
	public:
		BasicString();
		BasicString(const T *);
		BasicString(const T *, size_t);
		BasicString(c_lref_t s);
		BasicString(rref_t s) noexcept;
		~BasicString() noexcept;
		lref_t operator = (c_lref_t);
		lref_t operator = (rref_t) noexcept;

		const BasicStringSlice<T> toSlice() const noexcept;
		const char * const 		c_string() const noexcept;

		Optional<Size_t> getIndexOf(priv::first_t<T> &&) const noexcept;
		Optional<Size_t> getIndexOf(priv::last_t<T> &&) const noexcept;
		const Size_t 			getCountOf(T) const noexcept;
		template<class Y>
		const Bool 				isContain(Y &&) const noexcept;
		const Optional<T> 		getElementAt(Size_t) const;
			  Optional<T> 		getElementAt(Size_t);
		const Bool 				isEqual(c_lref_t) const noexcept;
		const Size_t 			getLength() const noexcept;

		const T & 				operator [] (Size_t) const;
			  T & 				operator [] (Size_t);
		const Bool 				operator == (c_lref_t) const noexcept;
		const Bool 				operator != (c_lref_t) const noexcept;

		Optional<BasicStringSlice<T>> getSubstring(priv::to_t<int>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<int>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<int>, priv::to_t<int>) const noexcept;
		//--------------
		Optional<BasicStringSlice<T>> getSubstring(priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::to_t<int>{to.value});}
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<Int> from) const noexcept{return this->getSubstring(priv::from_t<int>{from.value});}
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<Int> from, priv::to_t<Int> to) const noexcept{return this->getSubstring(priv::from_t<int>{from.value}, priv::to_t<int>{to.value});}
		//--------------
		Optional<BasicStringSlice<T>> getSubstring(priv::to_t<size_t>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<size_t>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<size_t>, priv::to_t<size_t>) const noexcept;
		//--------------
		Optional<BasicStringSlice<T>> getSubstring(priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::to_t<size_t>{to.value});}
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<Size_t> from) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value});}
		Optional<BasicStringSlice<T>> getSubstring(priv::from_t<Size_t> from, priv::to_t<Size_t> to) const noexcept{return this->getSubstring(priv::from_t<size_t>{from.value}, priv::to_t<size_t>{to.value});}
		//--------------
		Optional<BasicStringSlice<T>> getSubstring(priv::fromFirst_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::fromLast_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::toFirst_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::toLast_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::fromFirst_t<T>, priv::toFirst_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::fromLast_t<T>, priv::toFirst_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::fromFirst_t<T>, priv::toLast_t<T>) const noexcept;
		Optional<BasicStringSlice<T>> getSubstring(priv::fromLast_t<T>, priv::toLast_t<T>) const noexcept;
		
		template<template<class Y> class C>
		C<T> 					split()const;
		std::pair<BasicStringSlice<T>, BasicStringSlice<T>> spiltAt(size_t)const;
		std::pair<BasicStringSlice<T>, BasicStringSlice<T>> spiltAt(priv::first_t<T>)const;
		BasicStringSlice<T> 	trim() const noexcept;
		BasicStringSlice<T> 	trimBegin() const noexcept;
		BasicStringSlice<T> 	trimEnd() const noexcept;

		template<class Y>
		Optional<Y> as() const {return _AsHelper<Y>::get(*this);}
		template<template<class I, class A>class C>
		auto as(){return priv::BasicStringMake2<T, C>::get(*this);}
		template<template<class I>class C>
		auto as() {return priv::BasicStringMake1<T, C>::get(*this);}

		inline rref_t move() noexcept {return std::move(*this);}
	private: 
		memory::Slice _data;
		//friends
		template<class I, template<class T, class A> class C>
		friend struct priv::BasicStringMake2;
		template<class I, template<class T> class C>
		friend struct priv::BasicStringMake1;
		//helpers for 'as'
		template<class Y>
		struct _AsHelper {
			inline static Y get(BasicString<T, Alloc> const &);
		};
		#define REGISTER_SIGNED_AS_HELPER(_arg_type_)\
		template<>\
		struct _AsHelper<_arg_type_> {\
			static inline Optional<_arg_type_> get(BasicString<T, Alloc> const & str) {\
				IF_FAIL( return _arg_type_(std::stoi(static_cast<T *>(str._data.begin))) ){\
					return fail_exception;\
				}\
			}\
		};

		#define REGISTER_UNSIGNED_AS_HELPER(_arg_type_)\
		template<>\
		struct _AsHelper<_arg_type_> {\
			static inline Optional<_arg_type_> get(BasicString<T, Alloc> const & str) {\
				IF_FAIL( _arg_type_(std::stoul(static_cast<char *>(str._data.begin))) ){\
					return fail_exception;\
				}\
			}\
		};

		REGISTER_SIGNED_AS_HELPER(I16)
		REGISTER_SIGNED_AS_HELPER(I32)
		REGISTER_SIGNED_AS_HELPER(I64)

		REGISTER_UNSIGNED_AS_HELPER(U16)
		REGISTER_UNSIGNED_AS_HELPER(U32)
		REGISTER_UNSIGNED_AS_HELPER(U64)

		#undef REGISTER_SIGNED_AS_HELPER
		#undef REGISTER_UNSIGNED_AS_HELPER

		T * _getPtrTo(priv::first_t<T>) const noexcept;
		T * _getPtrTo(priv::last_t<T>) const noexcept;

		class _Iter: public std::iterator<std::random_access_iterator_tag, T>{
			T * _data;
			_Iter(T * d):_data(d){}
			friend class BasicString<T, Alloc>;
		public:
			reference operator *(){return *_data;}
			void operator ++(){++_data;}
			void operator --(){--_data;}
			bool operator !=(const _Iter & a){return _data != a._data;}
		};
		class _CIter: public std::iterator<std::random_access_iterator_tag, const T>{
			const T * _data;
			_CIter(const T * d) :_data(d) {}
			friend class BasicString<T, Alloc>;
		public:
			const reference operator *()const noexcept{return *_data;}
			void operator ++()noexcept{++_data;}
			void operator --()noexcept{--_data;}
			bool operator !=(const _CIter & a)const noexcept{return _data != a._data;}
		};
	public:
		using value_type = T;
		using size_type = size_t;
		using difference_type = ptrdiff_t;
		using reference = T &;
		using const_reference = const T &;
		using iterator = _Iter;
		using const_iterator = _CIter;

		iterator begin(){return iterator(static_cast<T *>(_data.begin));}
		iterator end(){return iterator(static_cast<T *>(_data.begin) + getLength().as<size_t>());}

		const_iterator begin() const {return const_iterator(static_cast<T *>(_data.begin));}
		const_iterator end() const {return const_iterator(static_cast<T *>(_data.begin) + getLength().as<size_t>());}

		const_iterator cbegin() const {return const_iterator(static_cast<T *>(_data.begin));}
		const_iterator cend() const {return const_iterator(static_cast<T *>(_data.begin) + getLength().as<size_t>());}

		template<class Y>
		friend std::ostream & operator << (std::ostream & os, const BasicString<char, Y> & sl);
	};
	namespace priv{
		template<class T>
		struct BasicStringMake1<T, gc::BasicStringSlice> {
			template<class Y>
			static inline gc::Optional<gc::BasicStringSlice<T>> get(Y const & s) {
				gc::BasicStringSlice<T> result(s._data.begin, static_cast<T *>(s._data.end) - 1);
				return result;
			}
		};
		template<class T>
		struct BasicStringMake2<T, std::vector>{
			template<class Y>
			static inline gc::Optional<std::vector<T>> get(Y const & s){
				std::vector<T> result;
				for (const auto & i : s)
					result.emplace_back(i);
				return result;
			}
		};
		template<class T>
		struct BasicStringMake2<T, std::list>{
			template<class Y>
			static inline gc::Optional<std::list<T>> get(Y const & s){
				std::list<T> result;
				s.cforeach([&result](auto const & i){result.emplace_back(i);});
				return result;
			}
		};
	}
	using String = BasicString<char, gc::Allocator>;
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    BasicString IMPLEMENTATION AREA                        |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class Y>
	std::ostream & operator << (std::ostream & os, const BasicString<char, Y> & s){
		return std::cout << static_cast<char *>(s._data.begin);
	}

	//												default ctor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::BasicString():
		_data(memory::Slice::null)
	{}
	//												const char * ctor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::BasicString(const T * ptr):
		_data(Alloc::allocate(bytes(strlen(ptr) + 1)).unwrap())
	{
		auto diff = _data.getDifference();
		strcpy_s(static_cast<char *>(_data.begin), diff, ptr);
	}
	//												const char *, size_t ctor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::BasicString(const T * ptr, size_t len):
		_data(Alloc::allocate(bytes(len + 1)).unwrap())
	{
		memcpy(_data.begin, ptr, len + 1);
	}
	//												copy ctor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::BasicString(typename BasicString<T, Alloc>::c_lref_t s):
		_data(Alloc::allocate(bytes(s.getLength().as<size_t>() + 1)).unwrap())
	{
		T * ptr = static_cast<T *>(_data.begin);
		for(T * i = static_cast<T *>(s._data.begin); i <= s._data.end; ++i, ++ptr)
			*ptr = *i;
		*static_cast<T *>(_data.end) = '\0';
	}
	//												move ctor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::BasicString(typename BasicString<T, Alloc>::rref_t s) noexcept:
		_data(s._data)
	{
		s._data = memory::Slice::null;
	}
	//												destructor
	template<class T, class Alloc>
	inline BasicString<T, Alloc>::~BasicString() noexcept {
		if (_data.begin)
			Alloc::deallocate(_data);
	}
	template<class T, class Alloc>
	inline typename BasicString<T, Alloc>::lref_t BasicString<T, Alloc>::operator = (typename BasicString<T, Alloc>::c_lref_t s){
		this->~decltype(*this);
		new(this) (s);
	}
	template<class T, class Alloc>
	inline typename BasicString<T, Alloc>::lref_t BasicString<T, Alloc>::operator = (typename BasicString<T, Alloc>::rref_t s) noexcept{
		this->~decltype(*this);
		new(this) (std::move(s));
	}

	template<class T, class Alloc>
	inline const BasicStringSlice<T> BasicString<T, Alloc>::toSlice() const noexcept{
		if (_data.begin)
			return BasicStringSlice<T>(static_cast<T *>(_data.begin), static_cast<T *>(_data.end) - 2);
		return BasicStringSlice<T>(nullptr, nullptr);
	}
	template<class T, class Alloc>
	const char * const BasicString<T, Alloc>::c_string() const noexcept{
		return static_cast<const char * const>(_data.begin);
	}
	template<class T, class Alloc>
	inline Optional<Size_t> BasicString<T, Alloc>::getIndexOf(priv::first_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return std::invalid_argument(std::to_string(t.value));
	}
	template<class T, class Alloc>
	inline Optional<Size_t> BasicString<T, Alloc>::getIndexOf(priv::last_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i > _data.begin; --i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}
	template<class T, class Alloc>
	const Size_t BasicString<T, Alloc>::getCountOf(T d) const noexcept{
		Size_t result = 0;
		for (auto ptr = static_cast<T *>(_data.begin); ptr < _data.end; ++ptr)
			if (*ptr == d)
				++result;
		return result;
	}
	template<class T, class Alloc>
	template<class Y>
	inline const Bool BasicString<T, Alloc>::isContain(Y && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t) return true;
		return false;
	}
	template<class T, class Alloc>
	inline const Optional<T> BasicString<T, Alloc>::getElementAt(Size_t i) const{
		if (i > this->getLength())
			return std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline Optional<T> BasicString<T, Alloc>::getElementAt(Size_t i){
		if (i > this->getLength())
			return std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool BasicString<T, Alloc>::isEqual(typename BasicString<T, Alloc>::c_lref_t s) const noexcept{
		return !strcmp(static_cast<char *>(_data.begin), static_cast<char *>(s._data.begin));
	}
	template<class T, class Alloc>
	inline const Size_t BasicString<T, Alloc>::getLength() const noexcept{
		return (static_cast<T *>(_data.end) - static_cast<T *>(_data.begin)) - 1;
	}
	template<class T, class Alloc>
	inline const T & BasicString<T, Alloc>::operator[] (Size_t i) const{
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline T & BasicString<T, Alloc>::operator[] (Size_t i){
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool BasicString<T, Alloc>::operator== (typename BasicString<T, Alloc>::c_lref_t s) const noexcept {
		return this->isEqual(s);
	}
	template<class T, class Alloc>
	inline const Bool BasicString<T, Alloc>::operator!= (typename BasicString<T, Alloc>::c_lref_t s) const noexcept {
		return !(this->isEqual(s));
	}
	//+-------------------------------------------------------------------------------------------+
	//|                             Get SubBasicString Area                                            |
	//+-------------------------------------------------------------------------------------------+
	template<class T, class Alloc>
	T * BasicString<T, Alloc>::_getPtrTo(priv::first_t<T> first) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); *i; ++i)//while not BasicString terminator
			if (*i == first.value)
				return i;
		return nullptr;
	}
	template<class T, class Alloc>
	T * BasicString<T, Alloc>::_getPtrTo(priv::last_t<T> last) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i >= _data.begin; --i)
			if (*i == last.value)
				return i;
		return nullptr;
	}
	template<class T, class Alloc>
	inline Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::to_t<int> to) const noexcept {
		int len = this->getLength().as<int>();
		int minusLen = this->getLength().as<int>() * -1;
		if (to.value > len || to.value < minusLen)
			return std::invalid_argument(__FUNCTION__);

		if (to.value >= 0)
			return BasicStringSlice<T>(_data.begin, static_cast<T *>(_data.begin) + to.value);
		else //value is negative
			return BasicStringSlice<T>(_data.begin, static_cast<T *>(_data.end) + to.value - 1);
	}
	template<class T, class Alloc>
	inline Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::from_t<int> from) const noexcept {
		int len = this->getLength().as<int>();
		int minusLen = this->getLength().as<int>() * -1;
		if (from.value > len || from.value < minusLen)
			return std::invalid_argument(__FUNCTION__);

		if (from.value >= 0)
			return BasicStringSlice<T>(static_cast<T *>(_data.begin) + from.value, static_cast<T *>(_data.end) - 2);
		else
			return BasicStringSlice<T>(static_cast<T *>(_data.end) - 1 + from.value, static_cast<T *>(_data.end) - 2);
	}
	template<class T, class Alloc>
	inline Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::from_t<int> from, priv::to_t<int> to) const noexcept {
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
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromFirst_t<T> from) const noexcept{
		auto res = _getPtrTo(priv::first_t<T>{ from.value });
		if (res)
			return BasicStringSlice<T>(res, static_cast<T *>(_data.end) - 1);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromLast_t<T> from) const noexcept{
		auto res = _getPtrTo(priv::last_t<T>{ from.value });
		if (res)
			return BasicStringSlice<T>(res, static_cast<T *>(_data.end) - 1);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::toFirst_t<T> to) const noexcept{
		auto res = _getPtrTo(priv::first_t<T>{ to.value });
		if (res)
			return BasicStringSlice<T>(static_cast<T *>(_data.begin), res);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::toLast_t<T> to) const noexcept{
		auto res = _getPtrTo(priv::last_t<T>{ to.value });
		if (res)
			return BasicStringSlice<T>(static_cast<T *>(_data.begin), res);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fromRes = _getPtrTo(priv::first_t<T>{ from.value });
		auto toRes =   _getPtrTo(priv::first_t<T>{ to.value });
		if (fromRes && toRes)
			return BasicStringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromLast_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::last_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::first_t<T>{ to.value });
		if (fromRes && toRes)
			return BasicStringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toLast_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::first_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::last_t<T>{ to.value });
		if (fromRes && toRes)
			return BasicStringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	template<class T, class Alloc>
	Optional<BasicStringSlice<T>> BasicString<T, Alloc>::getSubstring(priv::fromLast_t<T> from, priv::toLast_t<T> to) const noexcept{
		auto fromRes = 	_getPtrTo(priv::last_t<T>{ from.value });
		auto toRes = 	_getPtrTo(priv::last_t<T>{ to.value });
		if (fromRes && toRes)
			return BasicStringSlice<T>(fromRes, toRes);
		return std::invalid_argument(__FUNCTION__);
	}
	
	//+-------------------------------------------------------------------------------------------+
	//|                             Get SubBasicString Area End                                        |
	//+-------------------------------------------------------------------------------------------+


	template<class T, class Alloc>
	inline BasicStringSlice<T> BasicString<T, Alloc>::trim() const noexcept{
		T * firstPtr = static_cast<T *>(_data.begin);
		while (*firstPtr == ' ' || *firstPtr == '\t' || *firstPtr == '\n')
			++firstPtr;
		T * lastPtr = static_cast<T *>(_data.end) - 2;
		while (*lastPtr == ' ' || *lastPtr == '\t' || *lastPtr == '\n')
			--lastPtr;
		return BasicStringSlice<T>(firstPtr, lastPtr);
	}
	template<class T, class Alloc>
	inline BasicStringSlice<T> BasicString<T, Alloc>::trimBegin() const noexcept{
		T * firstPtr = static_cast<T *>(_data.begin);
		while (*firstPtr == ' ' || *firstPtr == '\t' || *firstPtr == '\n')
			++firstPtr;
		return BasicStringSlice<T>(firstPtr, static_cast<T *>(_data.end) - 2);
	}
	template<class T, class Alloc>
	inline BasicStringSlice<T> BasicString<T, Alloc>::trimEnd() const noexcept{
		T * lastPtr = static_cast<T *>(_data.end) - 2;
		while (*lastPtr == ' ' || *lastPtr == '\t' || *lastPtr == '\n')
			--lastPtr;
		return BasicStringSlice<T>(_data.begin, lastPtr);
	}
}