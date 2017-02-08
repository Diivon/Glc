#pragma once
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
			for (iter_t i = _list.begin(); i != _list.end(); ++i)
				if ((*i) == a)
					i = _list.erase(i);
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