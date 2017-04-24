#pragma once
#include "GC/Utils.h"
#include "GC/Optional.h"


namespace gc{
	template<class T>
	class BasicStringSlice: public ClassTraits<BasicStringSlice<T>>{
		const T * _begin;
		const T * _end;
		template<class Y>
		struct _AsHelper{
			inline static Y get(BasicStringSlice<T> const &);
		};
	public:
		//-------------------------------------------------------------
		BasicStringSlice(const T * b, const T * e) noexcept:
			_begin(b), _end(e)
		{}
		Bool isReversed() const noexcept;
		this_t getReversed() const noexcept;
		Size_t getLength() const noexcept;
		friend std::ostream & operator << (std::ostream & os, const BasicStringSlice<char> & sl);
		template<class Y>
		Optional<Y> as() const noexcept { return _AsHelper<Y>::get(*this); }
		//-------------------------------------------------------------
	private:
	};
	using StringSlice = BasicStringSlice<char>;
	namespace priv{
		template<class I, template<class T, class A> class C>
		struct BasicStringMake2{
			gc::Optional<C<I, void>> get();
		};
		template<class I, template<class T> class C>
		struct BasicStringMake1{
			gc::Optional<C<I>> get();
		};
	}
	inline std::ostream & operator << (std::ostream & os, const BasicStringSlice<char> & sl){
			if (!sl.isReversed())
				for(const char * ptr = static_cast<decltype(ptr)>(sl._begin); ptr <= sl._end; ++ptr)
					os.put(*ptr);
			else
				for(const char * ptr = static_cast<decltype(ptr)>(sl._begin); ptr >= sl._end; --ptr)
					os.put(*ptr);
			return os;
	}
	template<class T>
	typename BasicStringSlice<T>::this_t BasicStringSlice<T>::getReversed() const noexcept {
		return BasicStringSlice<T>(_end, _begin);
	}
	template<class T>
	inline Bool BasicStringSlice<T>::isReversed() const noexcept {
		return _begin > _end;
	}
	template<class T>
	inline Size_t BasicStringSlice<T>::getLength() const noexcept {
		auto res = _end - _begin;
		res >= 0 ? Size_t(res) : Size_t(-res);
	}
}