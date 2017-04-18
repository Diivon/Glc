#pragma once

namespace gc{
	namespace priv{	
			template<class T>
			class Iter{
				T & _container;
				template<class Y>
				using _func = Y(*)(void);
			public:
				Iter(T & c):_container(c){}
				
				///it takes one of gc functions instead of functor
				template<class Y>
				Iter & foreach(_func<Y> f) {
					auto fun = f();
					for (auto & i : _container) {
						fun(i);
					}
					return *this;
				}
				///it takes functor which take one argument, and apply it to every element of collection
				template<class F>
				Iter & foreach(F && f){
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
				Iter & exec(F && f) const { f(); return const_cast<Iter &>(*this); }
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
	auto iterateOver(T & v) -> priv::Iter<T>{
		return priv::Iter<T>(v);
	}
	template<class T>
	auto iterateConst(const T & v) -> priv::Iter<const T>{
		return priv::Iter<const T>(v);
	}
	priv::printer printEvery(){
		return priv::printer();
	}
	priv::debugger debugEvery(){
		return priv::debugger();
	}
}