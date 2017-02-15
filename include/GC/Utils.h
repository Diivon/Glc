#pragma once
#include <utility>
#include <fstream>
#include <stdint.h>
#include <string>
#include <vector>
namespace gc
{

	const float Pi = 3.14159265358979323846f;
	template<class T>
	struct TypeName
	{
		inline static std::string get(){
			static const unsigned int FRONT_SIZE = sizeof("gc::TypeName<") - 1u;
			static const unsigned int BACK_SIZE = sizeof(">::get") - 1u;
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
	struct NonCopyable
	{
		NonCopyable(){}
		NonCopyable(const NonCopyable &) = delete;
		void operator = (const NonCopyable &) = delete;
	};
	struct NonMoveable
	{
		NonMoveable(){}
		NonMoveable(NonMoveable &&) = delete;
		void operator = (NonMoveable &&) = delete;
	};
	
	typedef int8_t sbyte;
	typedef uint8_t byte;
	typedef int16_t int16;
	typedef uint16_t uint16;
	typedef int32_t int32;
	typedef uint32_t uint32;
	typedef int64_t int64;
	typedef uint64_t uint64;

	inline std::vector<char> getByteVectorFromFile(const std::string & s) {
		std::ifstream ifs(s, std::ios::in | std::ios::binary | std::ios::ate);//open file for reading
		decltype(ifs)::pos_type pos;//position in file 
		std::vector<char> data;		//file data which must be returned
		
		ifs.seekg(0, std::ios::end);//get length
		auto size = ifs.tellg();	//of file
		data.resize(static_cast<uint32>(size));			//resize buffer to fit file data
		ifs.seekg(0, std::ios::beg);//return position at start
		ifs.read(&data[0], size);	//read it
		return data;				//..
	}
}
typedef int8_t sbyte;
typedef uint8_t byte;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;