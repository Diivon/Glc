#pragma once
#include <type_traits>

namespace gc{
	namespace priv{	
		template<class T>
		class OwnerIterator{
			T _container;
			template<class Y>
			using _func = void (*)(Y);
		public:
			template<class Y>
			OwnerIterator(Y &&);
			///it takes functor which take one argument, and apply it to every element of collection
			template<class F>
			OwnerIterator & foreach(F &&);
			///it takes functor, apply it to every element in collection, and replace every element with result of this fuctor
			template<class F>
			OwnerIterator & map(F &&);
			///it takes functor which takes two argumets, first is accumulator, and second is current value
			template<class ResultType = typename T::value_type, class F, class Y>
			ResultType fold(Y && init, F &&);
			///it takes functor, which takes no argument, and just execute it without any pass through container
			template<class F>
			OwnerIterator & exec(F &&);
			T getContainer();
			template<class F>
			OwnerIterator & filter(F &&);
			template<class F>
			OwnerIterator & look(F &&);
		};
	}
	template<class T>
	priv::OwnerIterator<T> iterateConsume(T && v){
		//assertions
			static_assert(
				std::is_nothrow_move_constructible<T>::value,
				"iterate consume argument must be nothrow move constructible, else use other types of iterations");
			static_assert(
				std::is_nothrow_move_assignable<T>::value,
				"iterate consume argument must be nothrow move assignable, else use other types of iterations");
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

		//end assertions
		return priv::OwnerIterator<T>(std::move(v));
	}
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    ITERATIONS IMPLEMENTATION AREA                         |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	namespace priv{
		template<class T>
		template<class Y>
		OwnerIterator<T>::OwnerIterator(Y && y):
			_container(std::forward<Y>(y)) 
		{}
		template<class T>
		template<class F>
		inline OwnerIterator<T> & OwnerIterator<T>::foreach(F && f){
			static_assert(
				traits::is_able_to_call<F, T::reference>::value, 
				"foreach argument must be callable with Container::reference");
			for (auto & i : _container)
				f(i);
			return *this;
		}
		template<class T>
		template<class F>
		inline OwnerIterator<T> & OwnerIterator<T>::map(F && f){
			static_assert(
				traits::is_able_to_call<F, T::reference>::value, 
				"map argument must be callable with Container::reference");
			static_assert(
				std::is_assignable<T::value_type, traits::return_type<F>::type>::value, 
				"Container::value_type must be assignable with argument return value");
			for (auto & i : _container)
				i = f(i);//cause we are only owner of this container, we are able to change him
			return *this;
		}
		template<class T>
		template<class ResultType, class F, class Y>
		inline ResultType OwnerIterator<T>::fold(Y && init, F && f){
			static_assert(
				std::is_constructible<ResultType, Y &&>::value, 
				"ResultType of 'fold' must be constructible by first argument");
			static_assert(
				traits::is_able_to_call<F, ResultType, T::reference>::value, 
				"fold argument must be called with Result Type, and Container::reference");
			ResultType result(std::forward<Y>(init));
			for (const auto & i: _container){
				f(result, i);
			}
			return result;
		}
		template<class T>
		template<class F>
		inline OwnerIterator<T> & OwnerIterator<T>::exec(F && f) {
			static_assert(
				traits::is_able_to_call<F>::value,
				"exec argument must be called with no arguments");
			static_assert(//static warning, mb?!
				std::is_same<traits::return_type<F>::type, void>::value,
				"exec argument return value will be ignored");
			f();
			return *this; 
		}
		template<class T>
		inline T OwnerIterator<T>::getContainer(){
			return std::move(_container);
		}
		template<class T>
		template<class F>
		inline OwnerIterator<T> & OwnerIterator<T>::filter(F && f){
			static_assert(
				std::is_constructible<bool, traits::return_type<F, T::reference>::type>::value,
				"filter argument must return bool assignable type");
			static_assert(
				traits::container::is_has_method_erase<T, T::iterator>::value, 
				"iterateConsume argument must have 'erase' method to call 'filter'");
			for (auto i = std::begin(_container); i != std::end(_container); )
				if (f(*i))
					++i;
				else
					i = _container.erase(i);
			return *this;
		}
		template<class T>
		template<class F>
		inline OwnerIterator<T> & OwnerIterator<T>::look(F && f){
			static_assert(
				traits::is_able_to_call<F, T &>::value,
				"look argument must be called with l-reference to container");
			f(_container);
			return *this;
		}
	}
}
