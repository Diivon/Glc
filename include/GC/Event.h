#pragma once
#include <memory>
#include "GC/Delegate.h"
#include "GC/Utils.h"

//sorry, i just cannot comment this shit

namespace gc {
	template<class ... Args>
	class Event : public ClassTraits<Event<Args...>>
	{
		Event(c_lref_t) = delete;
		Event(rref_t) = delete;
		void operator = (c_lref_t) = delete;
		void operator = (rref_t) = delete;
		struct ICallable {virtual void call(Args...) = 0;};
		template<class T>
		class MethodCall : public ICallable {
			T * _t;
			void (T::*_met)(Args...);
		public:
			MethodCall(T * t, void (T::*met)(Args...)) :
				_t(t), _met(met)
			{}
			virtual void call(Args... args) override {
				(*_t.*_met)(std::forward<Args>(args)...);
			}
		};
		template<class T>
		class FunctorCall : public ICallable {
			T * _functor;
		public:
			FunctorCall(T * t) :
				_functor(t)
			{}
			virtual void call(Args... args) override {
				(*_functor)(std::forward<Args>(args)...);
			}
		};
		class EventCall : public ICallable {
			Event<Args...> * _event;
		public:
			EventCall(Event<Args...> * e):
				_event(e)
			{}
			virtual void call(Args... args) override {
				_event->emit(std::forward<Args>(args)...);
			}
		};

		using CallablePtr = std::unique_ptr<ICallable>;
		mutable	std::list<CallablePtr> _list;
	public:
		Event():
			_list()
		{}
		template<class Y>
		void sign(Y & t, void (Y::*meth)(Args...)) const {
			_list.emplace_back(new MethodCall<Y>(&t, meth));
		}
		template<class Y>
		void sign(Y * t, void (Y::*meth)(Args...)) const {
			_list.emplace_back(new MethodCall<Y>(t, meth));
		}
		template<class Y>
		void sign(Y & f) const {
			_list.emplace_back(new FunctorCall<Y>(&f));
		}
		template<class Y>
		void sign(Y * f) const {
			_list.emplace_back(new FunctorCall<Y>(f));
		}
		void sign(lref_t e) const{
			_list.emplace_back(new EventCall(&e));
		}
		void sign(ptr_t e) const{
			_list.emplace_back(new EventCall(e));
		}
		void emit(Args ... args) {
			for (auto & i : _list)
				i->call(std::forward<Args>(args)...);
		}
		unsigned int getCountOfSubscribers() {
			return _list.size();
		}
	};//version 0.6;
}//ns gc