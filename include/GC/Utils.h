#pragma once
#include <utility>
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
#include <limits>

#define GC_GET_WORD_SIZE (::gc::priv::size_if<std::numeric_limits<size_t>::max() == 0xffffffff, 4, 8>::value)
#define IF_FAIL(expr) try{ expr ; }catch(std::exception & fail_exception)
namespace gc
{
	typedef int8_t i8;
	typedef uint8_t u8;
	typedef int16_t i16;
	typedef uint16_t u16;
	typedef int32_t i32;
	typedef uint32_t u32;
	typedef int64_t i64;
	typedef uint64_t u64;
	const float Pi = 3.14159265358979323846f;
	namespace debug{
		//unwide the stack
		//[[deprecated("do you really need to panic? do you know what it's do?")]]
		[[noreturn]] 
		inline void panic(){
				throw;
		}
		//if assertion failed, it calls panic();
		inline bool panicAssert(bool expr){
			#ifdef GC_DEBUG
				if (!expr) 
					panic();
			#endif
			return expr;
		}
		//if assertion failed, throw exception
		template<class Ex>
		inline bool assert(bool expr){
			#ifdef GC_DEBUG
				if(!expr)
					throw Ex();
			#endif
			return expr;
		}
	}

	
	template<class T>
	struct TypeName
	{
		inline static std::string get(){
			static const size_t FRONT_SIZE = sizeof("gc::TypeName<") - 1u;
			static const size_t BACK_SIZE = sizeof(">::get") - 1u;
			static const size_t size = sizeof(__FUNCTION__) - FRONT_SIZE - BACK_SIZE;
			return std::string(__FUNCTION__ + FRONT_SIZE, size - 1u);
		}
	};
	template<class T, class Ptr = T *>
	struct ClassTraits
	{
		typedef T this_t; typedef const T c_this_t;
		typedef T & lref_t; typedef const T & c_lref_t; typedef volatile T & v_lref_t; typedef const volatile T & cv_lref_t;
		typedef T && rref_t; typedef const T && c_rref_t; typedef volatile T && v_rref_t; typedef const volatile T && cv_rref_t;
		typedef Ptr ptr_t; typedef const Ptr c_ptr_t; typedef volatile Ptr v_ptr_t; typedef const volatile Ptr cv_ptr_t;
		inline static const std::string getTypeName(){return TypeName<T>::get();}
	};	
	inline std::vector<char> getByteVectorFromFile(const std::string & s) {
		std::ifstream ifs(s, std::ios::in | std::ios::binary | std::ios::ate);//open file for reading
		if (ifs.fail())
			throw std::exception();
		decltype(ifs)::pos_type pos;//position in file 
		std::vector<char> data;		//file data which must be returned
		
		ifs.seekg(0, std::ios::end);//get length
		size_t size = static_cast<size_t>(ifs.tellg());	//of file
		data.resize(size);			//resize buffer to fit file data
		ifs.seekg(0, std::ios::beg);//return position at start
		ifs.read(&data[0], size);	//read it
		return data;				//..
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