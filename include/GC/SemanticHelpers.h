#pragma once

namespace gc{
	namespace priv{
		struct count_t{
			size_t value;
		};
		struct bytes_t{
			size_t value;
		};
		template<class T>
		struct from_t{
			T value;
		};
		template<class T>
		struct to_t{
			T value;
		};
	}
	priv::count_t count(size_t d){
		return priv::count_t{ d };
	}
	priv::bytes_t bytes(size_t d){
		return priv::bytes_t { d };
	}
	template<class T>
	priv::from_t<T> from(T && t){
		return priv::from_t{std::forward<T>(t)};
	}
	template<class T>
	priv::to_t<T> to(T && t){
		return priv::to_t{std::forward<T>(t)};
	}
}