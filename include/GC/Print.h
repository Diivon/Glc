#pragma once
#include <iostream>
#include "GC/StringSlice.h"
#include "GC/Vec2.h"

namespace gc{	
	namespace priv{
		struct printer{
			printer() {}
			template<class T, class Y, class ... Args>
			void operator () (T && , Y &&, Args && ...);
			template<class T>
			void operator () (T &&);
			void operator () (const gc::Vec2 & v){
				std::cout << '{' << v.x << ", " << v.y << '}';
			}
			void operator () ();
		};
		struct printLiner{
			printLiner() {}
			template<class T, class Y, class ... Args>
			void operator () (T &&, Y &&, Args && ...);
			template<class T>
			void operator () (T &&);
			void operator () (const gc::Vec2 & v){
				std::cout << '{' << v.x << ", " << v.y << '}' << std::endl;
			}
			void operator () ();
		};
	}
	extern priv::printer 	print;
	extern priv::printLiner println;
	template<class T>
	void dump(T && t){
		std::cout << "type: " << TypeName<T>::get() << ", " << "value: " << std::forward<T>(t);
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
	//----------------IMPLEMENTATION-------------------------
	namespace priv{
		template<class T, class Y, class ... Args>
		void printer::operator () (T && t, Y && y, Args && ... args){
			std::cout << t;
			this->operator() (std::forward<Y>(y), std::forward<Args>(args)...);
		}
		template<class T>
		void printer::operator () (T && t){
			std::cout << t;
		}
		inline void printer::operator () (){}
		template<class T, class Y, class ... Args>
		void priv::printLiner::operator () (T && t, Y && y, Args && ... args){
			std::cout << t;
			this->operator() (std::forward<Y>(y), std::forward<Args>(args)...);
		}
		template<class T>
		void priv::printLiner::operator () (T && t){
			std::cout << t << std::endl;
		}
		inline void priv::printLiner::operator () (){
			std::cout << std::endl;
		}
	}
}