#pragma once
#include <utility>
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
#include <limits>
#include "GC/Traits.h"

#define GC_GET_WORD_SIZE (::gc::priv::size_if<std::numeric_limits<size_t>::max() == 0xffffffff, 4, 8>::value)
#define IF_FAIL(expr) try{ expr ; }catch(std::exception & fail_exception)
///human readable lambdas
#define Lambda0 							[]()
#define Lambda1(name1) 						[](auto & name1)
#define Lambda2(name1, name2) 				[](auto & name1, auto & name2)
#define Lambda3(name1, name2, name3) 		[](auto & name1, auto & name2, auto & name3)
#define Lambda4(name1, name2, name3, name4) [](auto & name1, auto & name2, auto & name3, auto & name4)
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
}
typedef int8_t i8;
typedef uint8_t u8;
typedef int16_t i16;
typedef uint16_t u16;
typedef int32_t i32;
typedef uint32_t u32;
typedef int64_t i64;
typedef uint64_t u64;