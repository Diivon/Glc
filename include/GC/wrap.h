#pragma once
#include <string>
#include "GC/Optional.h"

namespace gc{
	namespace priv{
		template<class T, class Tr, class All, template<class Y, class A> class C>
		struct StringWrapperSplitHelper{};
		template<class T, class Tr, class All, class Y>
		struct StringWrapperAsHelper0{};
		template<class T, class Tr, class All, template<class I> class Y>
		struct StringWrapperAsHelper1{};
		template<class T, class Tr, class All, template<class I, class II> class Y>
		struct StringWrapperAsHelper2{};
	}




	template<class T, class Tr, class All>
	class StringWrapper{
		const std::basic_string<T, Tr, All> & _str;
		template<class Y, class YY, class YYY>
		friend StringWrapper<Y, YY, YYY> wrap(const std::basic_string<Y, YY, YYY> & str);
		StringWrapper(const std::basic_string<T, Tr, All> & str):
			_str(str){}
		using this_t = StringWrapper<T, Tr, All>;
	public:
		template<class F>
		this_t & foreach(F && f){for(const auto & i: _str) f(i); return *this;}
		template<class F>
		this_t & exec(F && f){f(); return *this;}
		template<class F>
		this_t & look(F && f){f(_str); return *this;}
		const std::basic_string<T, Tr, All> & getString(){return _str;}
		template<template<class Y, class A> class C>
		auto split(T delimiter) const noexcept{return priv::StringWrapperSplitHelper<T, Tr, All, C>::get(_str, delimiter);}
		template<class Y>
		auto as() const noexcept{return priv::StringWrapperAsHelper0<T, Tr, All, Y>::get(_str);}
		template<template<class A>class Y>
		auto as() const noexcept{return priv::StringWrapperAsHelper1<T, Tr, All, Y>::get(_str);}
		template<template<class A, class AA>class Y>
		auto as() const noexcept{return priv::StringWrapperAsHelper2<T, Tr, All, Y>::get(_str);}
	};




	template<class T, class Tr, class All>
	StringWrapper<T, Tr, All> wrap(const std::basic_string<T, Tr, All> & str){
		return StringWrapper<T, Tr, All>(str);
	}
	namespace priv{

		#define GC_REGISTER_STRING_WRAPPER_AS0_HELPER(_arg_type_, _func_name_)\
		template<class T, class Tr, class All>struct StringWrapperAsHelper0<T, Tr, All, _arg_type_>{\
			static inline Optional<_arg_type_> get(const std::basic_string<T, Tr, All> & str){\
				IF_FAIL( return _func_name_(str) ){return fail_exception;}}}
		#define GC_REGISTER_STRING_WRAPPER_AS2_HELPER(_arg_type_)\
		template<class T, class Tr, class All>\
		struct StringWrapperAsHelper2<T, Tr, All, _arg_type_>{\
			template<class Y>static inline gc::Optional<_arg_type_<T>> get(Y const & s){\
				try{_arg_type_<T> result;\
					for (const auto & i : s) result.emplace_back(i);\
					return result;}catch(std::exception & e){return e;}}}
		#define GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(_arg_type_)\
		template<class T, class Tr, class All>\
		struct StringWrapperSplitHelper<T, Tr, All, _arg_type_>{\
			static inline Optional<_arg_type_<std::basic_string<T, Tr, All>>> get(const std::basic_string<T, Tr, All> & s, T delimiter){\
				try{_arg_type_<std::basic_string<T>> result;\
					const T * str = s.c_str();\
					do{	const char *begin = str;\
						while ( *str != delimiter && *str )	str++;\
						result.push_back( std::basic_string<T, Tr, All>( begin, str ));\
					} while ( 0 != *str++ );return result;}catch(std::exception & e){return e;}}};

		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(float, 		std::stof);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(double, 		std::stod);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(long double, 	std::stold);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(I16, 			std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(I32, 			std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(I64, 			std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(U16,			std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(U32,			std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(U64,			std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(short, 		std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(int, 			std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(long, 		std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(long long, 	std::stoi);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(unsigned short,std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(unsigned int,	std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(unsigned long,std::stoul);
		GC_REGISTER_STRING_WRAPPER_AS0_HELPER(unsigned long long,std::stoul);

		#ifdef _VECTOR_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::vector);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::vector);
		#endif
		#ifdef _LIST_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::list);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::list);
		#endif
		#ifdef _DEQUE_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::deque);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::deque);
		#endif
		#ifdef _FORWARD_LIST_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::forward_list);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::forward_list);
		#endif
		#ifdef _STACK_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::stack);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::stack);
		#endif
		#ifdef _QUEUE_	
			GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER(std::queue);
			GC_REGISTER_STRING_WRAPPER_AS2_HELPER(std::queue);
		#endif

		#undef GC_REGISTER_STRING_WRAPPER_AS0_HELPER
		#undef GC_REGISTER_STRING_WRAPPER_AS2_HELPER
		#undef GC_REGISTER_STRING_WRAPPER_SPLIT_HELPER
	}
}