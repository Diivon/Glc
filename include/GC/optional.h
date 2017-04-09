#pragma once
#include <new>
namespace gc {
	template<class T>
	class Optional : ClassTraits<Optional<T>> {
		bool _success;
		union {
			T _data;
			std::exception _ex;
		};
	public:
		/*
		Optional(Optional<T> const & a):
			_success(a._success)
		{
			if (_success)
				new(_data) T(a._data);
			else
				new(_ex) std::exception(a._ex);
		}
		*/
		Optional(T const & y) : _data(y), _success(true) {}
		Optional(T && y) : _data(std::move(y)), _success(true) {}
		Optional(std::exception e) : _ex(e), _success(false) {}
		~Optional() {}
		T unwrap() {
			if (_success)
				return _data;
			else
				throw _ex;
		}
		T unwrapOr(T def) {
			if (_success)
				return _data;
			else
				return def;
		}
		T unwrapOrPanic() {
			if (_success)
				return _data;
			else
				throw;
		}
		template<class Y>
		T map(Y && y) const noexcept(noexcept(std::declval<Y>()(std::declval<std::exception>()))) {
			if (_success)
				return _data;
			else
				return y(_ex);
		}
		bool isHoldResult() const noexcept {
			return _success;
		}
	};
}