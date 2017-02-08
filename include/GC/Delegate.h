#pragma once
/*
	gc/Delegate provides class for Delegate object
	Delegate is analog of C# delegate, it is tool
	for processing chains.
	Example:
		gc::Delegate<int> d;
		d += [&](int i){std::cout << i << ' ';};
		d += [&](int i){std::cout << i * 2 << ' ';};
		d(5);
	Output is:
		5 10
*/
#include <list>

namespace gc {
	template<class RetType, class ... Params>
	class Delegate {};
	template<class RetType, class ... Params>
	class Delegate<RetType(Params...)>
	{
	public:
		typedef typename RetType(*func_t)(Params ...);
		Delegate() :_list()
		{}
		void operator += (func_t a) {
			_list.push_back(a);
		}
		void operator -= (func_t a) {
			_list.remove(a);
		}
		void operator () (Params ... a) {
			for (auto & i : _list)
				(*i)(a...);
		}
		int getCount() {
			return _list.size();
		}
	private:
		typedef typename std::list<func_t>::iterator iter_t;
		std::list<func_t> _list;
	};
}//ns gc