#pragma once
#include <iostream>
#include "GC/StringSlice.h"
#include "GC/Vec2.h"

namespace gc{	
	namespace priv{
		template<class T>
		void print(const T & t){std::cout << t;}
		struct printer{
			printer() {}
			template<class T, class Y, class ... Args>
			void operator () (const T & t, const Y & y, const Args & ... args){
				print(t);
				this->operator()(y, args ...);
			}
			template<class T>
			void operator () (const T & t){
				print(t);
			}
			void operator () (){}
		};
		struct printLiner{
			printLiner() {}
			template<class T, class Y, class ... Args>
			void operator () (const T & t,const Y & y,const Args & ... args){
				print(t);
				this->operator() (y, args ...);
			}
			template<class T>
			void operator () (T && t){
				print(t);
				std::cout << std::endl;
			}
			void operator () (){std::cout <<std::endl;}
		};
	}
	template<class T>
	void dump(const T & t){
		print("type: ", TypeName<T>::get(), ", value: ", t);
	}
	template<class T>
	struct TypeName
	{
		inline static const StringSlice get(){
			static constexpr size_t FRONT_SIZE = sizeof("gc::TypeName<");
			static constexpr size_t BACK_SIZE = sizeof(">::get");
			static const char * firstPtr = __FUNCTION__ + FRONT_SIZE - 1;
			static const char * lastPtr = __FUNCTION__ + sizeof(__FUNCTION__) - BACK_SIZE - 2;
			return StringSlice(firstPtr, lastPtr);
		}
	};
	#define GC_SPECIALIZE_PRINT(_arg_type) template<> void ::gc::priv::print(##_arg_type##)
	extern priv::printer 	print;
	extern priv::printLiner println;
}