#pragma once
/*
	gc/Collider provides Types for Collider primitives as Rectangle and Circle
	it also has next Config defines:
		GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
		GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
	GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
		if it is not defined, rectangle colliders size will always be positive, 
		and on trying to make it negative, it will throw gc::InvalidArgumentException
		as example:
			#undef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			#include "gc/Collider"
			int main(){
				gc::Collider<gc::ColliderType::Rectangle>(gc::Vec2(5,5), gc::Vec2(-10, 50));//exception will be thrown here
			}
		or
			#define GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			#include "gc/Collider"
			int main(){
				gc::Collider<gc::ColliderType::Rectangle>(gc::Vec2(5,5), gc::Vec2(-10, 50));//ok
			}
		also, if this macro is defined, performance can be decreased
	GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
		if it is not defined, circle colliders radius will be always positive,
		and on trying to makeit negative, it will throw gc::InvalidArgumentException
		as example
			#undef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			#include "gc/Collider"
			int main(){
				gc::Collider<gc::ColliderType::Circle>(gc::Vec2(5,5), -4);//exception will be thrown here
			}
		or
			#define GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			#include "gc/Collider"
			int main(){
				gc::Collider<gc::ColliderType::Circle>(gc::Vec2(5,5), -4);//ok
			}
	Both macro are undefined by default
*/
#include "Vec2.h"
#include "Utils.h"


namespace gc
{
	enum class ColliderType
	{
		Rectangle,
		Circle
	};
	template<ColliderType T>
	class Collider
	{
		//static_assert(false, "new gc::ColliderType was added, please specialize gc::Collider for it");
	};
	template<>
	class Collider<ColliderType::Circle>;
	template<>
	class Collider<ColliderType::Rectangle>
	{
		const Vec2 & _pos;//left up corner;
		Vec2 _size;//where x is width, and y is height
	public:
		inline Collider(Collider const & c);
		inline Collider(Collider && c);
		inline Collider(Vec2 const & pos, Vec2 const & size);
		inline Collider(Vec2 const & pos, float width = 0, float height = 0);
		inline Vec2 const & getPosition() const;

		inline Vec2 const & getSize() const { return _size; }
		inline Collider & changeSize(Vec2 const & v);
		inline Collider & changeSize(const float & dw, const float & dh);
		inline Collider & setSize(Vec2 const & s);
		inline Collider & setSize(const float & width, const float & height);
		inline const float getTopLevel() const;
		inline const float getLowLevel() const;
		inline const float getLeftLevel() const;
		inline const float getRightLevel() const;
		inline const Vec2 getTopLeftCorner() const;
		inline const Vec2 getLowLeftCorner() const;
		inline const Vec2 getTopRightCorner() const;
		inline const Vec2 getLowRightCorner() const;
		inline const bool isCollide(const Collider & c) const;
		inline const bool isCollide(const Collider<ColliderType::Circle> & a) const;
	};
	template<>
	class Collider<ColliderType::Circle>
	{
		const Vec2 & _pos;
		float _radius;
	public:
		inline Collider(Collider const & c);
		inline Collider(Collider && c);
		inline Collider(Vec2 const & pos, const float & radius = 0.0f);

		inline Vec2 const & getPosition() const;

		inline const float & getRadius() const;
		inline Collider & changeRadius(const float & dr);
		inline Collider & setRadius(const float & r);
		inline const float getTopLevel();
		inline const float getLowLevel();
		inline const float getLeftLevel();
		inline const float getRightLevel();
		inline const bool isCollide(Collider const & a) const;
		inline const bool isCollide(Collider<ColliderType::Rectangle> const & a) const;
	};

	/*--------------------------------------------------IMPLEMENTATION--------------------------------------------------------*/

	Collider<ColliderType::Rectangle>::Collider(const Collider<ColliderType::Rectangle> & c) :
		_pos(c._pos), _size(c._size)
	{}
	Collider<ColliderType::Rectangle>::Collider(Collider<ColliderType::Rectangle> && c):
		Collider(c)
	{}
	Collider<ColliderType::Rectangle>::Collider(Vec2 const & pos, Vec2 const & size) :
		_pos(pos), _size(size)
	{
		#ifndef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			if (size.x < 0 || size.y < 0)
				throw 228;
		#endif
	}
	Collider<ColliderType::Rectangle>::Collider(Vec2 const & pos, float width, float height) :
		_pos(pos), _size(width, height)
	{
		#ifndef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			if (width < 0 || height < 0)
				throw 228;
		#endif
	}
	Vec2 const & Collider<ColliderType::Rectangle>::getPosition() const {
		return _pos; 
	}
	Collider<ColliderType::Rectangle> & Collider<ColliderType::Rectangle>::changeSize(Vec2 const & v) { 
		_size += v; return *this; 
	}
	Collider<ColliderType::Rectangle> & Collider<ColliderType::Rectangle>::changeSize(const float & dw, const float & dh) {
		_size.x += dw; _size.y += dh; return *this;
	}
	Collider<ColliderType::Rectangle> & Collider<ColliderType::Rectangle>::setSize(Vec2 const & s) {
		_size = s; return *this; 
	}
	Collider<ColliderType::Rectangle> & Collider<ColliderType::Rectangle>::setSize(const float & width, const float & height) { 
		_size.x = width; _size.y = height; return *this; 
	}
	const float Collider<ColliderType::Rectangle>::getTopLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.y > 0 ? _pos.y : _pos.y + _size.y);
		#else
			return _pos.y;
		#endif
	}
	const float Collider<ColliderType::Rectangle>::getLowLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.y > 0 ? _pos.y + _size.y : _pos.y);//just inverted
		#else
			return _pos.y + _size.y;
		#endif
	}
	const float Collider<ColliderType::Rectangle>::getLeftLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.x > 0 ? _pos.x : _pos.x + _size.x);
		#else
			return _pos.x;
		#endif
	}
	const float Collider<ColliderType::Rectangle>::getRightLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.x > 0 ? _pos.x + _size.x : _pos.x);
		#else
			return _pos.x + _size.x;
		#endif
	}
	const Vec2 Collider<ColliderType::Rectangle>::getTopLeftCorner() const{
		return Vec2(this->getLeftLevel(), this->getTopLevel());
	}
	const Vec2 Collider<ColliderType::Rectangle>::getLowLeftCorner() const {
		return Vec2(this->getLeftLevel(), this->getLowLevel());
	}
	const Vec2 Collider<ColliderType::Rectangle>::getTopRightCorner() const {
		return Vec2(this->getRightLevel(), this->getTopLevel());
	}
	const Vec2 Collider<ColliderType::Rectangle>::getLowRightCorner() const {
		return Vec2(this->getRightLevel(), this->getLowLevel());
	}
	const bool Collider<ColliderType::Rectangle>::isCollide(const Collider<ColliderType::Rectangle> & c) const
	{
		auto selfTop = this->getTopLevel();
		auto selfBot = this->getLowLevel();
		auto selfLeft = this->getLeftLevel();
		auto selfRight = this->getRightLevel();

		auto targetTop = c.getTopLevel();
		auto targetBot = c.getLowLevel();
		auto targetLeft = c.getLeftLevel();
		auto targetRight = c.getRightLevel();

		if ((selfLeft >= targetLeft && selfLeft <= targetRight) || (selfRight <= targetRight && selfRight >= targetLeft))
			if ((selfTop >= targetTop && selfTop <= targetBot) || (selfBot <= targetBot && selfBot >= targetBot))
				return true;
		return false;
	}
	const bool Collider<ColliderType::Rectangle>::isCollide(Collider<ColliderType::Circle> const & a) const {
		return a.isCollide(*this);
	}

//-----------------------------------------------------------------------------------

	Collider<ColliderType::Circle>::Collider(Collider<ColliderType::Circle> const & c) :
		_pos(c._pos), _radius(c._radius)
	{}
	Collider<ColliderType::Circle>::Collider(Collider<ColliderType::Circle> && c):
		Collider(c)
	{}
	Collider<ColliderType::Circle>::Collider(Vec2 const & pos, const float & radius) :
		_pos(pos), _radius(radius)
	{
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			if (radius < 0)
				throw 228;
		#endif
	}
	Vec2 const & Collider<ColliderType::Circle>::getPosition() const {
		return _pos;
	}
	const float & Collider<ColliderType::Circle>::getRadius() const { 
		return _radius; 
	}
	Collider<ColliderType::Circle> & Collider<ColliderType::Circle>::changeRadius(const float & dr) {
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			if (dr < 0 && _radius < dr)
				throw 228;
		#endif
			_radius += dr; return *this;
	}
	Collider<ColliderType::Circle> & Collider<ColliderType::Circle>::setRadius(const float & r) {
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			if (r < 0)
				throw 228;
		#endif
			_radius = r;
		return *this;
	}
	const float Collider<ColliderType::Circle>::getRightLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			return (_radius < 0 ? _pos.x - _radius : _pos.x + _radius);
		#else
			return _pos.x + _radius;
		#endif
	}
	const float Collider<ColliderType::Circle>::getLeftLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			return (_radius < 0 ? _pos.x + _radius : _pos.x - _radius);
		#else
			return _pos.x - _radius;
		#endif
	}
	const float Collider<ColliderType::Circle>::getTopLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			return (_radius < 0 ? _pos.y + _radius : _pos.y - _radius);
		#else
			return _pos.y - _radius;
		#endif
	}
	const float Collider<ColliderType::Circle>::getLowLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_SIZE_ENABLE
			return (_radius < 0 ? _pos.y - _radius : _pos.y + _radius);
		#else
			return _pos.y + _radius;
		#endif
	}
	const bool Collider<ColliderType::Circle>::isCollide(Collider<ColliderType::Circle> const & a) const {
		float dx = a._pos.x - _pos.x;
		float dy = a._pos.y - _pos.y;
		float distance = abs(sqrt(dx * dx + dy * dy));
		if (distance <= (_radius + a._radius))
			return true;
		return false;
	}
	const bool Collider<ColliderType::Circle>::isCollide(Collider<ColliderType::Rectangle> const & a) const {
		if (_pos.x < a.getLeftLevel()) {//we left than argument
			if (_pos.y < a.getTopLevel()) //nearest is Top, Left corner
				return  (_pos - a.getTopLeftCorner()).getLength() < _radius;
			else if (_pos.y > a.getLowLevel()) {//nearest is Low, Left corner
				return (_pos - a.getLowLeftCorner()).getLength() < _radius;}
			else//nearest is Left side
				return (a.getLeftLevel() - _pos.x) < _radius;
		}
		else if (_pos.x > a.getRightLevel()) {//we right than argument
			if (_pos.y < a.getTopLevel())//nearest is Top, Right corner
				return (_pos - a.getTopRightCorner()).getLength() < _radius;
			else if (_pos.y > a.getLowLevel())//nearest is Low, Right corner
				return (_pos - a.getLowRightCorner()).getLength() < _radius;
			else//nearest is Right side
				return (_pos.x - a.getRightLevel()) < _radius;
		}
		else {//we inside on x
			if (_pos.y < a.getTopLevel())//nearest is Top side
				return (a.getTopLevel() - _pos.y) < _radius;
			else if (_pos.y > a.getLowLevel())//nearest is Bottom side
				return (_pos.y - a.getLowLevel()) < _radius;
			else //our center inside rectangle
				return true;
		}
	}
}