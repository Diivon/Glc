#pragma once

namespace sh{
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
		template<class T>
		struct fromFirst_t{
			T value;
		};
		template<class T>
		struct fromLast_t{
			T value;
		};
		template<class T>
		struct toFirst_t{
			T value;
		};
		template<class T>
		struct toLast_t{
			T value;
		};
		template<class T>
		struct first_t{
			T value;
		};
		template<class T>
		struct last_t{
			T value;
		};
		template<class T>
		struct after_t{
			T value;
		};
		template<class T>
		struct before_t{
			T value;
		};
		template<class T>
		struct degree_t{
			T value;
		};
		template<class T>
		struct radian_t{
			T value;
		};
	}
	inline priv::count_t count(::size_t d){
		return priv::count_t{ d };
	}
	inline priv::bytes_t bytes(::size_t d){
		return priv::bytes_t { d };
	}
	template<class T>
	inline priv::from_t<T> from(T && t){
		return priv::from_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::to_t<T> to(T && t){
		return priv::to_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::fromFirst_t<T> fromFirst(T && t){
		return priv::fromFirst_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::fromLast_t<T> fromLast(T && t){
		return priv::fromLast_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::toFirst_t<T> toFirst(T && t){
		return priv::toFirst_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::toLast_t<T> toLast(T && t){
		return priv::toLast_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline priv::last_t<T> last(T && t){
		return priv::last_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline auto first(T && t){
		return priv::first_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline auto after(T && t){
		return priv::after_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline auto before(T && t){
		return priv::before_t<T>{std::forward<T>(t)};
	}
	template<class T>
	inline auto degree(T const & t){
		return priv::degree_t<T>{t};
	}
	template<class T>
	inline auto radian(T const & t){
		return priv::radian_t<T>{t};
	}
}