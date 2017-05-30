#pragma once
#include <utility>
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
#include <limits>
#include "Optional.h"
#include "SemanticHelpers.h"

#define GC_GET_WORD_SIZE (::gc::priv::size_if<std::numeric_limits<size_t>::max() == 0xffffffff, 4, 8>::value)
#define IF_FAIL(expr) try{ expr ; }catch(std::exception & fail_exception)

#define _GC_REGISTER_THIS_T(_arg_type_) 	using this_t = _arg_type_;
#define _GC_REGISTER_LREF_T(_arg_type_) 	using lref_t = _arg_type_ &;
#define _GC_REGISTER_RREF_T(_arg_type_) 	using rref_t = _arg_type_ &&;
#define _GC_REGISTER_C_LREF_T(_arg_type_) 	using c_lref_t = _arg_type_ const &;
#define GC_REGISTER_TYPE_ALIASES(_arg_type_)\
		_GC_REGISTER_THIS_T(_arg_type_)\
		_GC_REGISTER_LREF_T(_arg_type_)\
		_GC_REGISTER_RREF_T(_arg_type_)\
		_GC_REGISTER_C_LREF_T(_arg_type_)

namespace gc
{
	template<class T>
	struct TypeAliases{
		using this_t = T;
		using c_lref_t = const T &;
		using lref_t = T &;
		using rref_t = T &&;
	};
	typedef int8_t i8;
	typedef uint8_t u8;
	typedef int16_t i16;
	typedef uint16_t u16;
	typedef int32_t i32;
	typedef uint32_t u32;
	typedef int64_t i64;
	typedef uint64_t u64;
	const float Pi = 3.14159265358979323846f;
	using c_string = const char *;
	template<size_t Size>
	using c_static_string = const char[Size];
	inline Optional<std::vector<u8>> getByteVectorFromFile(const std::string & s) {
		std::ifstream ifs(s, std::ios::in | std::ios::binary | std::ios::ate);//open file for reading
		if (ifs.fail())	
			return std::exception();
		decltype(ifs)::pos_type pos;//position in file 
		std::vector<u8> data;		//file data which must be returned
		
		ifs.seekg(0, std::ios::end);//get length
		size_t size = static_cast<size_t>(ifs.tellg());	//of file
		IF_FAIL (data.resize(size)){ return fail_exception; }	//resize buffer to fit file data
		ifs.seekg(0, std::ios::beg);//return position at start
		ifs.read(reinterpret_cast<char * >(data.data()), size);	//read it
		return data;				//..
	}
	template<class T>
	inline sh::priv::degree_t<T> toDegree(T const & v){
		auto e = v / Pi * 180.0f;
		return{ e };
	}
	template<class T>
	inline sh::priv::radian_t<T> toRadian(T const & v){
		auto e = v * Pi / 180.0f;
		return{ e };
	}
	[[noreturn]] 
	//unwide the stack
	inline void panic(){throw;}
	//if assertion failed, it calls panic();
	inline static bool panicAssert(bool expr){
		#ifdef GC_DEBUG
			if (!expr)
				panic();
		#endif
		return expr;
	}
	//if assertion failed, throw exception
	template<class Ex>
	static bool assert(bool expr){
		#ifdef GC_DEBUG
			if(!expr)
				throw Ex();
		#endif
		return expr;
	}
	namespace priv{
		template<bool c, size_t t, size_t>
		struct size_if {
			static constexpr size_t value = 4;
		};
		template<size_t t, size_t f>
		struct size_if<true, t, f> {
			static constexpr size_t value = t;
		};
		template<size_t t, size_t f>
		struct size_if<false, t, f> {
			static constexpr size_t value = f;
		};
	}
}
typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;