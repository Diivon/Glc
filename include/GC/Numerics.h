#pragma once
#include "GC/Utils.h"
#include <limits>

namespace gc{
	namespace priv{
		class Bool{
			bool _data;
		public:
			inline Bool() noexcept : _data() {}
			inline Bool(Bool const & a)noexcept : _data(a._data) {}
			inline Bool(bool const & a) noexcept : _data(a) {}
			inline const Bool & operator = (Bool const & a) noexcept {_data = a._data;}
			inline const Bool & operator = (Bool && a) noexcept {_data = a._data;}
			inline const Bool operator == (Bool const & a) const noexcept{return _data == a._data;}
			inline const Bool operator != (Bool const & a) const noexcept{return _data != a._data;}
	
			inline Bool operator ! () const noexcept{return !_data;}
			inline operator bool() const noexcept{return _data;}
		};
		#define ASSERT_INTEGRAL(_arg_type_) static_assert(std::is_integral<T>::value, "numeric_base template argument is not numeric");
		template<class T>
		class numeric_base{
			T _data;
			ASSERT_INTEGRAL(T)
		public:
			inline numeric_base<T>()noexcept : _data() {}
			inline numeric_base<T>(const T & t)noexcept : _data(t) {}
			inline numeric_base<T>(numeric_base<T> const & a)noexcept : _data(a._data) {}
			inline numeric_base<T>(numeric_base<T> && a)noexcept : _data(a._data) {}
			inline const numeric_base<T> & operator = (numeric_base<T> const & a) noexcept {_data = a._data;return *this;}
			inline const numeric_base<T> & operator = (numeric_base<T> && a)	  noexcept {_data = a._data;return *this;}

			inline const Bool operator == (numeric_base<T> const & a) const noexcept{return _data == a._data;}
			inline const Bool operator != (numeric_base<T> const & a) const noexcept{return _data != a._data;}
			inline const Bool operator <  (numeric_base<T> const & a) const noexcept{return _data <  a._data;}
			inline const Bool operator >  (numeric_base<T> const & a) const noexcept{return _data >  a._data;}
			inline const Bool operator <= (numeric_base<T> const & a) const noexcept{return _data <= a._data;}
			inline const Bool operator >= (numeric_base<T> const & a) const noexcept{return _data >= a._data;}

			template<class Y>
			inline const Bool operator == (Y const & a) const noexcept{return _data == a;ASSERT_INTEGRAL(T)}
			template<class Y>
			inline const Bool operator != (Y const & a) const noexcept{return _data != a;ASSERT_INTEGRAL(T)}
			template<class Y>
			inline const Bool operator <  (Y const & a) const noexcept{return _data <  a;ASSERT_INTEGRAL(T)}
			template<class Y>
			inline const Bool operator >  (Y const & a) const noexcept{return _data >  a;ASSERT_INTEGRAL(T)}
			template<class Y>
			inline const Bool operator <= (Y const & a) const noexcept{return _data <= a;ASSERT_INTEGRAL(T)}
			template<class Y>
			inline const Bool operator >= (Y const & a) const noexcept{return _data >= a;ASSERT_INTEGRAL(T)}
		
			inline const numeric_base<T> operator << (numeric_base<T> const & a) const noexcept{return _data << a._data;}
			inline const numeric_base<T> operator >> (numeric_base<T> const & a) const noexcept{return _data >> a._data;}
		
			inline const numeric_base<T> operator + () const noexcept{if(_data) return _data; else return -_data;}
			inline const numeric_base<T> operator - () const noexcept{return -_data}
			inline const numeric_base<T> operator + (numeric_base<T> const & a) const noexcept{return _data + a._data;}
			inline const numeric_base<T> operator - (numeric_base<T> const & a) const noexcept{return _data - a._data;}
			inline const numeric_base<T> operator * (numeric_base<T> const & a) const noexcept{return _data * a._data;}
			inline const numeric_base<T> operator / (numeric_base<T> const & a) const noexcept{return _data - a._data;}
			inline const numeric_base<T> operator +=(numeric_base<T> const & a) noexcept{_data += a._data;return _data;}
			inline const numeric_base<T> operator -=(numeric_base<T> const & a) noexcept{_data -= a._data;return _data;}
			inline const numeric_base<T> operator *=(numeric_base<T> const & a) noexcept{_data *= a._data;return _data;}
			inline const numeric_base<T> operator /=(numeric_base<T> const & a) noexcept{_data -= a._data;return _data;}

			inline const numeric_base<T> operator + (T const & a) const noexcept{return _data + a._data;}
			inline const numeric_base<T> operator - (T const & a) const noexcept{return _data - a._data;}
			inline const numeric_base<T> operator * (T const & a) const noexcept{return _data * a._data;}
			inline const numeric_base<T> operator / (T const & a) const noexcept{return _data - a._data;}
			inline const numeric_base<T> operator +=(T const & a) noexcept 		{return _data += a;}
			inline const numeric_base<T> operator -=(T const & a) noexcept 		{return _data -= a;}
			inline const numeric_base<T> operator *=(T const & a) noexcept 		{return _data *= a;}
			inline const numeric_base<T> operator /=(T const & a) noexcept 		{return _data -= a;}
			
			inline const numeric_base<T> operator % (numeric_base<T> const & a) const noexcept{return _data % a._data;}
			inline const numeric_base<T> operator % (T const & a) const noexcept{return _data % a;}
			
			inline const Bool operator ! () const noexcept{return !_data;}
			inline operator bool() const noexcept{return _data != 0;}
			inline operator Bool() const noexcept{return _data != 0;}
		
			//inline operator T() const noexcept{return _data;}
			template<class Y>
			Y as() const noexcept {return static_cast<Y>(_data);}
			template<>
			T as<T>() const noexcept {return _data;}

			inline static const numeric_base<T> getMaxValue(){return std::numeric_limits<T>::max();}
			friend std::ostream & operator << (std::ostream & s, numeric_base<T> const & n){
				return s << n._data;
			}
			inline void print() const {
				std::cout << _data;
			}
			inline void debug() const{
				gc::debug::log.write(_data);
			}
		};
	}
}
typedef gc::priv::numeric_base<u16> U16;
typedef gc::priv::numeric_base<i16> I16;
typedef gc::priv::numeric_base<u32> U32;
typedef gc::priv::numeric_base<i32> I32;
typedef gc::priv::numeric_base<u64> U64;
typedef gc::priv::numeric_base<i64> I64;
typedef gc::priv::numeric_base<int> Int;
typedef gc::priv::numeric_base<size_t> Size_t;
typedef gc::priv::Bool Bool;
#undef ASSERT_INTEGRAL