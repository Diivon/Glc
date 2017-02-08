#pragma once
#include "Delegate.h"
#include <memory>

namespace gc {
	template<class ... Args>
	class ClassEvent
	{
		struct ICallable {
			virtual void call(Args ...) = 0;
		};
		template<class T>
		class Callable : public ICallable {
			T * _t;
			void (T::*_met)(Args...);
		public:
			Callable(T * t, void (T::*met)(Args...)) :
				_t(t), _met(met)
			{}
			virtual void call(Args ... args) override {
				(*_t.*_met)(std::forward<Args>(args)...);
			}
		};
		class noObj {};
		template<>
		class Callable<noObj> : public ICallable {
			void(*func)(Args...);
		public:
			Callable(decltype(func) f) :func(f) {}
			virtual void call(Args ... args) override {
				func(std::forward<Args>(args)...);
			}
		};
		using CallablePtr = std::unique_ptr<ICallable>;

		mutable	std::list<CallablePtr> _list;
	public:
		ClassEvent() :
			_list()
		{}
		~ClassEvent() {}
		template<class Y>
		void add(Y & t, void (Y::*meth)(Args...)) const {
			_list.emplace_back(new Callable<Y>(&t, meth));
		}
		template<class Y>
		void add(Y * t, void (Y::*meth)(Args...)) const {
			_list.emplace_back(new Callable<Y>(t, meth));
		}
		template<class Y>
		void add(Y * f) const {
			_list.emplace_back(new Callable<noObj>(f));
		}
		void emit(Args ... args) const {
			for (auto & i : _list)
				i->call(std::forward<Args>(args)...);
		}
		unsigned int getCountOfSubscribers() {
			return _list.size();
		}
	};//version 0.3;
}//ns gc