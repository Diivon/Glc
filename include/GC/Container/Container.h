#pragma once
#include "GC/Utils.h"

namespace gc{
	template<class T, class Alloc>
	class Container{
		T * _data;
		size_t _len;
	public:
		Container();
		Container(T *, size_t);
		template<class ... Args>
		Container(size_t, Args ...);
		~Container();
	};
	//+---------------------------------------------------------------------------+
	//|                                                                           |
	//|                    CONTAINER IMPLEMENTATION AREA                          |
	//|                                                                           |
	//+---------------------------------------------------------------------------+
	template<class T, class Alloc>
	Container<T, Alloc>::Container()
		_data(nullptr), _len(0)
	{}
	template<class T, class Alloc>
	Container<T, Alloc>::Container(T * ptr, size_t len):
		_data(ptr), _len(len)
	{}
	template<class T, class Alloc>
	template<class ... Args>
	Container<T, Alloc>::Container(size_t len, Args ... args):
		_data(Alloc::allocate(len * sizeof(T)).unwrap()), _len(len)
	{
		for (size_t i = 0; i < _len; ++i)
			new(_data[i]) T(std::forward<Args>(args)...);
	}
	template<class T, class Alloc>
	Container<T, Alloc>::~Container(){}
}
