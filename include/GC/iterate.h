#pragma once
#include <type_traits>

namespace gc{
	namespace priv{	
		template<class T>
		class BorrowIterator{
			T & _container;
			template<class Y>
			using _func = Y(*)(void);
		public:
			template<class Y>
			BorrowIterator(Y && c):_container(c){}
			
			///it takes one of gc functions instead of functor
			template<class Y>
			BorrowIterator & foreach(_func<Y> f) {
				auto fun = f();
				for (auto & i : _container) {
					fun(i);
				}
				return *this;
			}
			///it takes functor which take one argument, and apply it to every element of collection
			template<class F>
			BorrowIterator & foreach(F && f){
				for (auto & i : _container){
					f(i);
				}
				return *this;
			}
			///it takes functor, and push to resulted container result of this functor
			template<class F>
			T map(F && f) const {
				T result;
				for (const auto & i : _container){
					result.emplace_back(f(i));
				}
				return result;
			}
			///it takes functor which takes two argumets, first is accumulator, and second is current value
			template<class ResultType = typename T::value_type, class F, class Y>
			ResultType fold(Y && init, F && f) const {
				ResultType result(std::forward<Y>(init));
				for (const auto & i: _container){
					f(result, i);
				}
				return result;
			}
			///it takes functor, which takes no argument, and just execute it without any pass through container
			template<class F>
			BorrowIterator & exec(F && f) { 
				f(); 
				return *this; 
			}
		};
		template<class T>
		class OwnerIterator{
			T _container;
			template<class Y>
			using _func = Y(*)(void);
		public:
			template<class Y>
			OwnerIterator(Y && y): _container(std::forward<Y>(y)) {}

			///it takes one of gc functions instead of functor
			template<class Y>
			OwnerIterator & foreach(_func<Y> f) {
				auto fun = f();
				for (auto & i : _container) {
					fun(i);
				}
				return *this;
			}
			///it takes functor which take one argument, and apply it to every element of collection
			template<class F>
			OwnerIterator & foreach(F && f){
				for (auto & i : _container){
					f(i);
				}
				return *this;
			}
			///it takes functor, and push to resulted container result of this functor
			template<class F>
			T map(F && f) const {
				for (const auto & i : _container){
					i = f(i);//cause noone need in this vector, we are able to change him
				}
				return _container;
			}
			///it takes functor which takes two argumets, first is accumulator, and second is current value
			template<class ResultType = typename T::value_type, class F, class Y>
			ResultType fold(Y && init, F && f) const {
				ResultType result(std::forward<Y>(init));
				for (const auto & i: _container){
					f(result, i);
				}
				return result;
			}
			template<class ResultType = typename T::value_type, class Y>
			ResultType fold(Y && init) const {
				static_assert(false, "fold must take 2 arguments(init value for accumulator, and functor to modify accumulator)");
			}
			///it takes functor, which takes no argument, and just execute it without any pass through container
			template<class F>
			OwnerIterator & exec(F && f) {
				f(); 
				return *this; 
			}
		};
		struct printer {
			template<class T>
			void operator () (const T & i) {
				std::cout << i << ' ';
			}
		};
		struct debugger{
			template<class T>
			void operator () (const T & i) {
				debug::log.write(i).write(' ');
			}
		};
	}
	template<class T>
	auto iterateBorrow(T & v) -> priv::BorrowIterator<T>{
		return priv::BorrowIterator<T>(v);
	}
	template<class T>
	auto iterateConst(const T & v) -> priv::BorrowIterator<const T>{
		return priv::BorrowIterator<const T>(v);
	}
	template<class T>
	auto iterateConsume(T && v) -> priv::OwnerIterator<T>{
		static_assert(std::is_rvalue_reference<decltype(v)>::value, "iterateConsume argument must be rvalue reference");
		return priv::OwnerIterator<T>(std::move(v));
	}
	priv::printer printEvery(){
		return priv::printer();
	}
	priv::debugger debugEvery(){
		return priv::debugger();
	}
}