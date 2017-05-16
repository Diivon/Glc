#pragma once
#include <type_traits>

namespace gc{
	template<class T>
	class Property{
		T _value;
	public:
		Property(T const &) noexcept(std::is_nothrow_copy_constructible<T>::value);
		Property(T &&) noexcept(std::is_nothrow_move_constructible<T>::value);
		const T & get() const noexcept;
		T & get() noexcept;
		void set(T const &) noexcept(std::is_nothrow_copy_assignable<T>::value);
		void set(T &&) noexcept(std::is_nothrow_move_assignable<T>::value);
	};
	template<class T>
	Property<T>::Property(T const & t) noexcept(std::is_nothrow_copy_constructible<T>::value):
		T(t)
	{}
	template<class T>
	Property<T>::Property(T && t) noexcept(std::is_nothrow_move_constructible<T>::value):
		T(std::move(t))
	{}
	template<class T>
	const T & Property<T>::get() const noexcept{
		return _value;
	}
	template<class T>
	T & Property<T>::get() noexcept{
		return _value;
	}
	template<class T>
	void Property<T>::set(T const & t) noexcept(std::is_nothrow_copy_assignable<T>::value){
		_value = t;
	}
	template<class T>
	void Property<T>::set(T && t) noexcept(std::is_nothrow_move_assignable<T>::value){
		_value = std::move(t);
	}
}