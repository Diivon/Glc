#pragma once
#include "GC/Utils.h"
#include "GC/Allocator.h"
#include <cstring>
#include <exception>

namespace gc
{
	template<class T>
	class StringSlice: public ClassTraits<StringSlice<T>>{
	public:
		memory::Slice _data;
		StringSlice(T * b, T * e): _data{b, e} {}
		StringSlice(void * b, void * e) : _data{ b, e } {}
		StringSlice(const memory::Slice &) noexcept;
		Bool isReversed() const noexcept;
		lref_t reverse() noexcept { std::swap(_data.begin, _data.end); return *this; }
		this_t getReversed() const noexcept { return StringSlice<T>(memory::Slice{ _data.end, _data.begin }); }
		friend std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl){
			if (!sl.isReversed())
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr <= sl._data.end; ++ptr)
					os.put(*ptr);
			else
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr >= sl._data.end; --ptr)
					os.put(*ptr);
			return os;
		}
	};
	template<class T, class Alloc = gc::Allocator>
	class String: public ClassTraits<String<T, Alloc>>
	{
		memory::Slice _data;
		template<class Y>
		struct _AsHelper {};
		template<>
		struct _AsHelper<int> {
			static inline int get(String<T, Alloc> const & str) {
				return std::stoi(static_cast<char *>(str._data.begin));
			}
		};
		template<>
		struct _AsHelper<Size_t> {
			static inline Size_t get(String<T, Alloc> const & str) {
				return static_cast<Size_t>(std::stoi(static_cast<char *>(str._data.begin)));
			}
		};
	public:
		String();
		~String();
		String(const T *);
		String(c_lref_t s);
		String(rref_t s);
		const StringSlice<T> toSlice() const noexcept;
		friend std::ostream & operator << (std::ostream & os, const String<T, Alloc> & s){
			return os << static_cast<T *>(s._data.begin);
		}
		StringSlice<T> getSubstring(priv::to_t<int>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<int>) const noexcept;
		StringSlice<T> getSubstring(priv::from_t<int>, priv::to_t<int>) const noexcept;
		StringSlice<T> getSubstring(priv::fromFirst_t<T>, priv::toFirst_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromLast_t<T>, priv::toFirst_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromFirst_t<T>, priv::toLast_t<T>) const noexcept;
		StringSlice<T> getSubstring(priv::fromLast_t<T>, priv::toLast_t<T>) const noexcept;

		const Size_t getIndexOf(priv::first_t<T> &&) const noexcept;
		const Size_t getIndexOf(priv::last_t<T> &&) const noexcept;
		template<class Y>
		const Bool isContain(Y &&) const noexcept;
		const T getElementAt(Size_t) const noexcept;
		const Bool isEqual(c_lref_t) const noexcept;
		const Size_t getLength() const noexcept;

		const T operator [] (Size_t) const;
		const Bool operator == (c_lref_t) const noexcept;
		const Bool operator != (c_lref_t) const noexcept;
		
		
		template<class F>
		lref_t foreach(F &&) noexcept(noexcept(F()(T())));
		template<class F>
		c_lref_t cforeach(F &&) const noexcept(noexcept(F()(T())));
		template<class F>
		this_t map(F &&) const noexcept(noexcept(F()(T())));
		template<class F>
		lref_t filter(F &&) noexcept(noexcept(F()(T())));
		template<class F>
		this_t select(F &&) noexcept(noexcept(F()(T())));

		template<class Y>
		auto as() const {
			return _AsHelper<Y>::get(*this);
		}
	private:
	};
	//---------------IMPLEMENTATION----------------------
	template<class T>
	inline StringSlice<T>::StringSlice(const memory::Slice & ms) noexcept:
		_data(ms)
	{}
	template<class T>
	inline Bool StringSlice<T>::isReversed() const noexcept {
		return _data.begin > _data.end;
	}

	template<class T, class Alloc>
	inline String<T, Alloc>::String():
		_data{nullptr, nullptr}
	{}
	template<class T, class Alloc>
	inline String<T, Alloc>::String(const T * ptr):
		_data(Alloc::allocate<>(bytes(strlen(ptr) + 1)))
	{
		auto diff = _data.getDifference();
		strcpy_s(static_cast<char *>(_data.begin), diff, ptr);
	}

	template<class T, class Alloc>
	inline String<T, Alloc>::~String(){
		Alloc::deallocate(_data);
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getLength() const noexcept{
		return static_cast<T *>(_data.end) - static_cast<T *>(_data.begin);
	}
	template<class T, class Alloc>
	inline const StringSlice<T> String<T, Alloc>::toSlice() const noexcept{
		if (_data.begin)
			return StringSlice<T>(_data);
		return StringSlice<T>(memory::Slice::null);
	}
	template<class T, class Alloc>
	template<class Y>
	inline const Bool String<T, Alloc>::isContain(Y && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t) return true;
		return false;
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getIndexOf(priv::first_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getIndexOf(priv::last_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i > _data.begin; --i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}

	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::to_t<int> to) const noexcept {
		if (to.value > 0)
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.begin) + to.value);
		else //value is negative
			if (to.value > this->getLength() * -1)
				return StringSlice<T>(_data.begin, static_cast<T *>(_data.end) + to.value);
			else return StringSlice<T>(memory::Slice::null);//error
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from) const noexcept {
		INVALIDATE_SUBSTRING_ARGUMENT(from.value)
		return StringSlice<T>(static_cast<T *>(_data.begin) + from.value, _data.end);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from, priv::to_t<int> to) const noexcept {
		INVALIDATE_SUBSTRING_ARGUMENT(from.value)
		INVALIDATE_SUBSTRING_ARGUMENT(to.value)
		return StringSlice<T>(memory::Slice{static_cast<T *>(_data.begin) + from.value, static_cast<T *>(_data.begin) + to.value});
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fst = this->getIndexOf(priv::first_t<T>{ from.value });
		auto lst = this->getIndexOf(priv::first_t<T>{ to.value });
		return StringSlice<T>(memory::Slice{static_cast<char *>(_data.begin) + fst, static_cast<char *>(_data.begin) + lst});
	}
}