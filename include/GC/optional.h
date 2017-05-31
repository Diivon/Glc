#pragma once
#include "GC/Utils.h"
#include <new>
namespace gc {
	template<class T>
	class Optional{
		bool _success;
		union {
			T _data;
			std::exception _ex;
		};
	public:
		Optional(const Optional<T> & a):
			_success(a._success)
		{
			if (_success)
				_data =  a._data;
			else
				_ex = a._ex;
		}
		Optional(Optional<T> && a):
			_success(a._success)
		{
			if (_success)
				_data =  std::move(a._data);
			else
				_ex = std::move(a._ex);
		}
		Optional(const T & y) : _data(y), _success(true) {}
		Optional(T && y) : _data(std::move(y)), _success(true) {}
		Optional(const std::exception & e) : _ex(e), _success(false) {}
		~Optional() {}
		T unwrap() {
			if (_success)
				return std::move(_data);
			else
				throw _ex;
		}
		T unwrapOr(T def) noexcept {
			if (_success)
				return _data;
			else
				return def;
		}
		T unwrapOrPanic() {
			if (_success)
				return _data;
			else
				panic();
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
		operator T(){
			static_assert(false, "look like you forget to unwrap Optional")
		}
	};
	//specialization for l-reference
	template<class T>
	class Optional<T &>{
		bool _success;
		union {
			T * _data;
			std::exception _ex;
		};
	public:
		Optional(Optional<T &> const & a):
			_success(a._success)
		{
			if (_success)
				_data =  a._data;
			else
				_ex =  a._ex;
		}
		Optional(T & y) : _data(&y), _success(true) {}
		Optional(T && y) : _data(&(std::move(y))), _success(true) {}
		Optional(std::exception e) : _ex(e), _success(false) {}
		~Optional() {}
		T & unwrap() {
			if (_success)
				return *_data;
			else
				throw _ex;
		}
		T & unwrapOr(T def) {
			if (_success)
				return *_data;
			else
				return def;
		}
		T & unwrapOrPanic() {
			if (_success)
				return *_data;
			else
				debug::panic;
		}
		template<class Y>
		T & map(Y && y) const noexcept(noexcept(std::declval<Y>()(std::declval<std::exception>()))) {
			if (_success)
				return *_data;
			else
				return y(_ex);
		}
		bool isHoldResult() const noexcept {
			return _success;
		}
		operator T &(){
			static_assert(false, "look like you forget to unwrap Optional")
		}
	};
}