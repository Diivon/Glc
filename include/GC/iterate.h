#pragma once
#include <type_traits>

namespace gc{
	namespace priv{	
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
			OwnerIterator & map(F && f) {
				for (auto & i : _container){
					i = f(i);//cause no one need in this vector, we are able to change him
				}
				return *this;
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
			OwnerIterator & exec(F && f) {
				f(); 
				return *this; 
			}
			T getContainer(){
				return std::move(_container);
			}
			template<class F>
			OwnerIterator & filter(F && f){
				for (auto i = std::begin(_container); i != std::end(_container); ){
						if (f(*i))
							++i;
						else
							i = _container.erase(i);
				}
				return *this;
			}
			template<class F>
			OwnerIterator & look(F && f){
				f(_container);
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
	priv::OwnerIterator<T> iterateConsume(T && v){
		//assertions
		static_assert(
			std::is_nothrow_move_constructible<T>::value,
			"iterate consume argument must be nothrow constructible, else use other types of iterations");
			static_assert(
				std::is_rvalue_reference<decltype(v)>::value, 
				"iterateConsume argument must be rvalue reference");
			static_assert(
				traits::container::is_has_typedef_value_type<T>::value, 
				"iterateConsume argument must have 'value_type' typedef");
			static_assert(
				traits::container::is_has_typedef_reference<T>::value, 
				"iterateConsume argument must have 'reference' typedef");
			static_assert(
				traits::container::is_has_typedef_iterator<T>::value, 
				"iterateConsume argument must have 'iterator' typedef");
			static_assert(
				traits::container::is_has_typedef_const_iterator<T>::value, 
				"iterateConsume argument must have 'const_iterator' typedef");
			static_assert(//for what?!
				traits::container::is_has_typedef_difference_type<T>::value, 
				"iterateConsume argument must have 'difference_type' typedef");
			static_assert(
				traits::container::is_has_typedef_size_type<T>::value, 
				"iterateConsume argument must have 'size_type' typedef");
			static_assert(
				traits::container::is_has_method_erase<T, T::iterator>::value, 
				"iterateConsume argument must have 'erase' method");
			static_assert(
				traits::container::is_has_method_emplace_back<T, T::value_type>::value, 
				"iterateConsume argument must have 'emplace_back' method");
		//end assertions
		return priv::OwnerIterator<T>(std::move(v));
	}
	priv::printer printEvery() {
		return priv::printer();
	}
	priv::debugger debugEvery(){
		return priv::debugger();
	}
}