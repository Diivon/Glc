#pragma once
#include <iostream>

namespace gc{		
	template<class T, class Y, class ... Args>
	void print(T &&, Args && ...);
	template<class T, class Y, class ... Args>
	void println(T &&, Args && ...);
	//----------------IMPLEMENTATION-------------------------
	template<class T, class Y, class ... Args>
	void print(T && t, Y && y, Args && ... args){
		std::cout << t;
		print(std::forward<Y>(y), std::forward<Args>(args)...);
	}
	template<class T>
	void print(T && t){
		std::cout << t;
	}
	void print(){
	}
	template<class T, class Y, class ... Args>
	void println(T && t, Y && y, Args && ... args){
		std::cout << t;
		print(std::forward<Y>(y), std::forward<Args>(args)...);
		std::cout << std::endl;
	}
	template<class T, class ... Args>
	void println(T && t, Args && ... args){
		print(std::forward<T>(t), std::forward<Args>(args)...);
		std::cout << std::endl;
	}
	void println(){
		std::cout << std::endl;
	}
}