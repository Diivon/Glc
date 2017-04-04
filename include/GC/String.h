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
	public:
		StringSlice(const memory::Slice &) noexcept;
		bool isReversed() const noexcept;
		lref_t reverse() noexcept { std::swap(_data.begin, _data.end); return *this; }
		this_t getReversed() const noexcept { return StringSlice<T>(memory::Slice{ _data.end, _data.begin }); }
		friend std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl){
			if (!sl.isReversed())
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr < sl._data.end; ++ptr)
					os.put(*ptr);
			else
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr > sl._data.end; --ptr)
					os.put(*ptr);
			return os;
		}
	};
	template<class T, class Alloc = gc::Allocator>
	class String: public ClassTraits<String<T, Alloc>>
	{
		memory::Slice _data;
	public:
		String();
		~String();
		String(const T *);
		String(c_lref_t s);
		String(rref_t s);
		StringSlice<T> toSlice() const noexcept(noexcept(StringSlice<T>(memory::Slice::null)));
		friend std::ostream & operator << (std::ostream & os, const String<T, Alloc> & s){
			return os << static_cast<T *>(s._data.begin);
		}
		const StringSlice<T> getSubstring(priv::to_t<int>) const;
		const StringSlice<T> getSubstring(priv::from_t<int>) const;
		const StringSlice<T> getSubstring(priv::from_t<int>, priv::to_t<int>) const;
		const StringSlice<T> getSubstring(priv::fromFirst_t<int>, priv::toFirst_t<int>) const;
		const StringSlice<T> getSubstring(priv::fromLast_t<int>, priv::toFirst_t<int>) const;
		const StringSlice<T> getSubstring(priv::fromFirst_t<int>, priv::toLast_t<int>) const;
		const StringSlice<T> getSubstring(priv::fromLast_t<int>, priv::toLast_t<int>) const;

		const size_t getIndexOf(T &&) const;
		const bool isContain(T &&) const noexcept;
		const T getElementAt(size_t) const noexcept;
		const T operator [] (size_t) const;

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
		Y as() const;
	};
	//---------------IMPLEMENTATION----------------------
	template<class T>
	inline StringSlice<T>::StringSlice(const memory::Slice & ms) noexcept:
		_data(ms)
	{}
	template<class T>
	inline bool StringSlice<T>::isReversed() const noexcept {
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
		strcpy_s(static_cast<char *>(_data.begin), _data.getDifference(), ptr);
	}

	template<class T, class Alloc>
	inline String<T, Alloc>::~String(){
		Alloc::deallocate(_data);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::toSlice() const noexcept(noexcept(StringSlice<T>(memory::Slice::null))){
		if (_data.begin)
			return StringSlice<T>(_data);
		return StringSlice<T>(memory::Slice::null);
	}
	#define INVALIDATE_SUBSTRING_ARGUMENT(x) if (x < 0)\
	throw std::out_of_range(std::to_string(x));\
	if (static_cast<size_t>(x) > (_data.getDifference() * sizeof(T)))\
		throw std::out_of_range(std::to_string(x));

	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::to_t<int> to) const {
		INVALIDATE_SUBSTRING_ARGUMENT(to.value)
		return StringSlice<T>(memory::Slice{ _data.begin, static_cast<T *>(_data.begin) + to.value });
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from) const {
		INVALIDATE_SUBSTRING_ARGUMENT(from.value)
		return StringSlice<T>(memory::Slice{static_cast<T *>(_data.begin) + from.value, _data.end});
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from, priv::to_t<int> to) const{
		INVALIDATE_SUBSTRING_ARGUMENT(from.value)
		INVALIDATE_SUBSTRING_ARGUMENT(to.value)
		return StringSlice<T>(memory::Slice{static_cast<T *>(_data.begin) + from.value, static_cast<T *>(_data.begin) + to.value});
	}
	#undef INVALIDATE_SUBSTRING_ARGUMENT
	template<class T, class Alloc, class Y>
	inline Y String<T, Alloc>::as() const{
		return Y(*this);
	}
	template<class T, class Alloc>
	inline int String<T, Alloc>::as<int>() const{
		return std::stoi(_data.begin);
	}
}