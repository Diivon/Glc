	//---------------IMPLEMENTATION----------------------
namespace gc{
	template<class T>
	inline StringSlice<T>::StringSlice(const memory::Slice & ms) noexcept:
		_data(ms)
	{}
	std::ostream & operator << (std::ostream & os, const StringSlice<char> & sl){
			if (!sl.isReversed())
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr <= sl._data.end; ++ptr)
					os.put(*ptr);
			else
				for(const char * ptr = static_cast<decltype(ptr)>(sl._data.begin); ptr >= sl._data.end; --ptr)
					os.put(*ptr);
			return os;
		}
	template<class T>
	typename StringSlice<T>::lref_t StringSlice<T>::reverse() noexcept {
		std::swap(_data.begin, _data.end);
		return *this;
	}
	template<class T>
	typename StringSlice<T>::this_t StringSlice<T>::getReversed() const noexcept {
		return StringSlice<T>(memory::Slice{ _data.end, _data.begin });
	}
	template<class T>
	inline Bool StringSlice<T>::isReversed() const noexcept {
		return _data.begin > _data.end;
	}
	template<class T>
	template<class F>
	typename StringSlice<T>::lref_t StringSlice<T>::foreach(F && f){
		if (!this->isReversed())
			for(const T * ptr = static_cast<decltype(ptr)>(_data.begin); ptr <= _data.end; ++ptr)
				f(*ptr);
		else
			for(const T * ptr = static_cast<decltype(ptr)>(_data.begin); ptr >= _data.end; --ptr)
				f(*ptr);
		return *this;
	}

	//STRING---STRING---STRING---STRING---STRING---STRING---STRING---STRING

	//												default ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String():
		_data(memory::Slice::null)
	{}
	//												const char * ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(const T * ptr):
		_data(Alloc::allocate<>(bytes(strlen(ptr) + 1)))
	{
		auto diff = _data.getDifference();
		strcpy_s(static_cast<char *>(_data.begin), diff, ptr);
	}
	//												copy ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(typename String<T, Alloc>::c_lref_t s):
		_data(Alloc::allocate<>(bytes(s.getLength() + 1)))
	{
		//TODO: allocator must throw
		T * ptr = static_cast<T *>(_data.begin);
		for(T * i = static_cast<T *>(s._data.begin); i <= s._data.end; ++i, ++ptr)
			*ptr = *i;
	}
	//												move ctor
	template<class T, class Alloc>
	inline String<T, Alloc>::String(typename String<T, Alloc>::rref_t s):
	{
		std::swap(_data.begin, s._data.begin);
		std::swap(_data.end, s._data.end);
	}
	template<class T, class Alloc>
	inline String<T, Alloc>::~String(){
		Alloc::deallocate(_data);
	}
	template<class T, class Alloc>
	std::ostream & operator << (std::ostream & os, const String<T, Alloc> & s){
			return os << static_cast<T *>(s._data.begin);
	}
	template<class T, class Alloc>
	inline const StringSlice<T> String<T, Alloc>::toSlice() const noexcept{
		if (_data.begin)
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.end) - 1);
		return StringSlice<T>(memory::Slice::null);
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getIndexOf(priv::first_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getIndexOf(priv::last_t<T> && t) const noexcept{
		for (T * i = static_cast<T *>(_data.end); i > _data.begin; --i)
			if (*i == t.value)
				return i - static_cast<T *>(_data.begin);
		return Size_t::getMaxValue();
	}
	template<class T, class Alloc>
	template<class Y>
	inline const Bool String<T, Alloc>::isContain(Y && t) const noexcept{
		for (T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			if (*i == t) return true;
		return false;
	}
	template<class T, class Alloc>
	inline const T String<T, Alloc>::getElementAt(Size_t i) const{
		if (i > this->getLength())
			throw std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline T String<T, Alloc>::getElementAt(Size_t i){
		if (i > this->getLength())
			throw std::out_of_range();
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::isEqual(typename String<T, Alloc>::c_lref_t s) const noexcept{
		/*
		if (this->getLength() != s.getLength())
			return false;
		for (T * ptr = static_cast<T *>(_data.begin), T * i = static_cast<T *>(s._data.begin); ptr <= _data.end; ++ptr, ++i)
			if (*ptr != *i)
				return false;
		return true;
		*/
		return strcmp(_data.begin, s._data.begin);
	}
	template<class T, class Alloc>
	inline const Size_t String<T, Alloc>::getLength() const noexcept{
		return (static_cast<T *>(_data.end) - static_cast<T *>(_data.begin)) - 1;
	}
	template<class T, class Alloc>
	inline const T String<T, Alloc>::operator[] (Size_t i) const{
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline T String<T, Alloc>::operator[] (Size_t i){
		return static_cast<T *>(_data.begin)[static_cast<size_t>(i)];
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::operator== (typename String<T, Alloc>::c_lref_t s) const noexcept {
		return this->isEqual(s);
	}
	template<class T, class Alloc>
	inline const Bool String<T, Alloc>::operator!= (typename String<T, Alloc>::c_lref_t s) const noexcept {
		return !(this->isEqual(s));
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::to_t<int> to) const noexcept {
		int len = static_cast<int>(this->getLength());
		int minusLen = len * -1;
		if (to.value > len || to.value < minusLen)
			return StringSlice<T>(memory::Slice::null);

		if (to.value >= 0)
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.begin) + to.value);
		else //value is negative
			return StringSlice<T>(_data.begin, static_cast<T *>(_data.end) + to.value - 1);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from) const noexcept {
		int len = static_cast<int>(this->getLength());
		int minusLen = len * -1;
		if (from.value > len || from.value < minusLen)
			return StringSlice<T>(memory::Slice::null);

		if (from.value >= 0)
			return StringSlice<T>(static_cast<T *>(_data.begin) + from.value, static_cast<T *>(_data.end) - 2);
		else
			return StringSlice<T>(static_cast<T *>(_data.end) - 1 + from.value, static_cast<T *>(_data.end) - 2);
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::from_t<int> from, priv::to_t<int> to) const noexcept {
		memory::Slice result = {nullptr, nullptr};
		size_t len = this->getLength();
		int minusLen = static_cast<int>(this->getLength() * -1);

		if (from.value > len || from.value < minusLen)
			return StringSlice<T>(memory::Slice::null);
		if (from.value >= 0)
			result.begin = static_cast<T *>(_data.begin) + from.value;
		else
			result.begin = static_cast<T *>(_data.end) + from.value - 1;

		if (to.value > len || to.value < minusLen)
			return StringSlice<T>(memory::Slice::null);
		if (to.value >= 0)
			result.end = static_cast<T *>(_data.begin) + to.value;
		else
			result.end = static_cast<T *>(_data.end) + to.value - 1;
		return result;
	}
	template<class T, class Alloc>
	inline StringSlice<T> String<T, Alloc>::getSubstring(priv::fromFirst_t<T> from, priv::toFirst_t<T> to) const noexcept{
		auto fst = this->getIndexOf(priv::first_t<T>{ from.value });
		auto lst = this->getIndexOf(priv::first_t<T>{ to.value });
		return StringSlice<T>(memory::Slice{static_cast<char *>(_data.begin) + fst, static_cast<char *>(_data.begin) + lst});
	}

	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::lref_t String<T, Alloc>::foreach(F && f){
		for(T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			f(*i);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::c_lref_t String<T, Alloc>::cforeach(F && f) const{
		for(T * i = static_cast<T *>(_data.begin); i < _data.end; ++i)
			f(*i);
		return *this;
	}
	template<class T, class Alloc>
	template<class F>
	inline typename String<T, Alloc>::this_t String<T, Alloc>::map(F && f) const{
		this_t result = *this;
		for(T * ptr = static_cast<T *>(_data.begin), T * i = static_cast<T *>(result._data.begin); i < _data.end; ++i, ++ptr)
			*i = f(*ptr);
		return *this;
	}
}