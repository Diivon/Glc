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
	class Collider<ColliderType::Rectangle> : public gc::ClassTraits<Collider<ColliderType::Rectangle>>
	{
		Vec2 _pos;//left up corner;
		Vec2 _size;//where x is width, and y is height
	public:
		inline this_t();
		inline this_t(const lref_t c);
		inline this_t(rref_t c);
		inline this_t(Vec2::c_lref_t pos, Vec2::c_lref_t size);
		inline this_t(Vec2::c_lref_t pos, float width = 0, float height = 0);
		inline Vec2::c_lref_t getPosition() const;
		inline lref_t moveOn(Vec2::c_lref_t v);
		inline lref_t moveOn(const float & dx, const float & dy);
		inline lref_t moveTo(Vec2::c_lref_t v);
		inline lref_t moveTo(const float & x, const float & y);

		inline Vec2::c_lref_t getSize() const { return _size; }
		inline lref_t changeSize(Vec2::c_lref_t v);
		inline lref_t changeSize(const float & dw, const float & dh);
		inline lref_t setSize(Vec2::c_lref_t s);
		inline lref_t setSize(const float & width, const float & height);
		inline const float getTopLevel() const;
		inline const float getLowLevel() const;
		inline const float getLeftLevel() const;
		inline const float getRightLevel() const;
		inline const Vec2 getTopLeftCorner() const;
		inline const Vec2 getLowLeftCorner() const;
		inline const Vec2 getTopRightCorner() const;
		inline const Vec2 getLowRightCorner() const;
		inline const bool isCollide(const lref_t c) const;
		inline const bool isCollide(const Collider<ColliderType::Circle> & a) const;
	};
	template<>
	class Collider<ColliderType::Circle> : public ClassTraits<Collider<ColliderType::Circle>>
	{
		Vec2 _pos;
		float _radius;
	public:
		inline this_t();
		inline this_t(c_lref_t c);
		inline this_t(rref_t c);
		inline this_t(Vec2::c_lref_t pos, const float & radius = 0.0f);
		inline this_t(const float & x, const float & y, const float & radius = 0.0f);

		inline Vec2::c_lref_t getPosition() const;
		inline lref_t moveOn(Vec2::c_lref_t v);
		inline lref_t moveOn(const float & dx, const float & dy);
		inline lref_t moveTo(Vec2::c_lref_t v);
		inline lref_t moveTo(const float & x, const float & y);

		inline const float & getRadius() const;
		inline lref_t changeRadius(const float & dr);
		inline lref_t setRadius(const float & r);
		inline const float getTopLevel();
		inline const float getLowLevel();
		inline const float getLeftLevel();
		inline const float getRightLevel();
		inline const bool isCollide(c_lref_t a) const;
		inline const bool isCollide(Collider<ColliderType::Rectangle>::c_lref_t a) const;
	};

	/*--------------------------------------------------IMPLEMENTATION--------------------------------------------------------*/

	
#pragma region GC_COLLIDER_RECT_REGION
	#define GC_COLLIDER_RECT Collider<ColliderType::Rectangle>
	//default constructor
	GC_COLLIDER_RECT::Collider() :
		_pos(), _size()
	{}
	GC_COLLIDER_RECT::Collider(const lref_t c) :
		_pos(c._pos), _size(c._size)
	{}
	GC_COLLIDER_RECT::Collider(rref_t c):
		this_t(c)
	{}
	GC_COLLIDER_RECT::Collider(Vec2::c_lref_t pos, Vec2::c_lref_t size) :
		_pos(pos), _size(size)
	{
		#ifndef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			if (size.x < 0 || size.y < 0)
				throw 228;
		#endif
	}
	GC_COLLIDER_RECT::Collider(Vec2::c_lref_t pos, float width, float height) :
		_pos(pos), _size(width, height)
	{
		#ifndef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			if (width < 0 || height < 0)
				throw 228;
		#endif
	}
	Vec2::c_lref_t GC_COLLIDER_RECT::getPosition() const {
		return _pos; 
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::moveOn(Vec2::c_lref_t v) {
		_pos += v; return *this; 
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::moveOn(const float & dx, const float & dy) {
		_pos.x += dx; _pos.y += dy; return *this; 
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::moveTo(Vec2::c_lref_t v) {
		_pos = v; return *this;
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::moveTo(const float & x, const float & y) {
		_pos.x = x; _pos.y = y; return *this;
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::changeSize(Vec2::c_lref_t v) { 
		_size += v; return *this; 
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::changeSize(const float & dw, const float & dh) {
		_size.x += dw; _size.y += dh; return *this;
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::setSize(Vec2::c_lref_t s) {
		_size = s; return *this; 
	}
	GC_COLLIDER_RECT::lref_t GC_COLLIDER_RECT::setSize(const float & width, const float & height) { 
		_size.x = width; _size.y = height; return *this; 
	}
	const float GC_COLLIDER_RECT::getTopLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.y > 0 ? _pos.y : _pos.y + _size.y);
		#else
			return _pos.y;
		#endif
	}
	const float GC_COLLIDER_RECT::getLowLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.y > 0 ? _pos.y + _size.y : _pos.y);//just inverted
		#else
			return _pos.y + _size.y;
		#endif
	}
	const float GC_COLLIDER_RECT::getLeftLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.x > 0 ? _pos.x : _pos.x + _size.x);
		#else
			return _pos.x;
		#endif
	}
	const float GC_COLLIDER_RECT::getRightLevel() const	{
		#ifdef GC_COLLIDER_RECT_NEGATIVE_SIZE_ENABLE
			return (_size.x > 0 ? _pos.x + _size.x : _pos.x);
		#else
			return _pos.x + _size.x;
		#endif
	}
	const Vec2 GC_COLLIDER_RECT::getTopLeftCorner() const{
		return Vec2(this->getLeftLevel(), this->getTopLevel());
	}
	const Vec2 GC_COLLIDER_RECT::getLowLeftCorner() const {
		return Vec2(this->getLeftLevel(), this->getLowLevel());
	}
	const Vec2 GC_COLLIDER_RECT::getTopRightCorner() const {
		return Vec2(this->getRightLevel(), this->getTopLevel());
	}
	const Vec2 GC_COLLIDER_RECT::getLowRightCorner() const {
		return Vec2(this->getRightLevel(), this->getLowLevel());
	}
	const bool GC_COLLIDER_RECT::isCollide(const lref_t c) const
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
	const bool GC_COLLIDER_RECT::isCollide(Collider<ColliderType::Circle>::c_lref_t a) const {
		return a.isCollide(*this);
	}
	#undef GC_COLLIDER_RECT
#pragma endregion
#pragma region GC_COLLIDER_CIRCLE_REGION
	#define GC_COLLIDER_CIRCLE Collider<ColliderType::Circle>
	GC_COLLIDER_CIRCLE::Collider():
		_pos(), _radius(0.0f)
	{}
	GC_COLLIDER_CIRCLE::Collider(c_lref_t c) :
		_pos(c._pos), _radius(c._radius)
	{}
	GC_COLLIDER_CIRCLE::Collider(rref_t c):
		this_t(c)
	{}
	GC_COLLIDER_CIRCLE::Collider(Vec2::c_lref_t pos, const float & radius) :
		_pos(pos), _radius(radius)
	{
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			if (radius < 0)
				throw 228;
		#endif
	}
	GC_COLLIDER_CIRCLE::Collider(const float & x, const float & y, const float & radius) :
		_pos(x, y), _radius(radius)
	{
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			if (radius < 0)
				throw 228;
		#endif 
	}
	Vec2::c_lref_t GC_COLLIDER_CIRCLE::getPosition() const {
		return _pos;
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::moveOn(Vec2::c_lref_t v) { 
		_pos += v; return *this; 
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::moveOn(const float & dx, const float & dy) { 
		_pos.x += dx; _pos.y += dy; return *this; 
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::moveTo(Vec2::c_lref_t v) { 
		_pos = v; return *this; 
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::moveTo(const float & x, const float & y) {
		_pos.x = x; _pos.y = y; return *this; 
	}
	const float & GC_COLLIDER_CIRCLE::getRadius() const { 
		return _radius; 
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::changeRadius(const float & dr) {
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			if (dr < 0 && _radius < dr)
				throw 228;
		#endif
			_radius += dr; return *this;
	}
	GC_COLLIDER_CIRCLE::lref_t GC_COLLIDER_CIRCLE::setRadius(const float & r) {
		#ifndef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			if (r < 0)
				throw 228;
		#endif
			_radius = r;
		return *this;
	}
	const float GC_COLLIDER_CIRCLE::getRightLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			return (_radius < 0 ? _pos.x - _radius : _pos.x + _radius);
		#else
			return _pos.x + _radius;
		#endif
	}
	const float GC_COLLIDER_CIRCLE::getLeftLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			return (_radius < 0 ? _pos.x + _radius : _pos.x - _radius);
		#else
			return _pos.x - _radius;
		#endif
	}
	const float GC_COLLIDER_CIRCLE::getTopLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			return (_radius < 0 ? _pos.y + _radius : _pos.y - _radius);
		#else
			return _pos.y - _radius;
		#endif
	}
	const float GC_COLLIDER_CIRCLE::getLowLevel() {
		#ifdef GC_COLLIDER_CIRCLE_NEGATIVE_RADIUS_ENABLE
			return (_radius < 0 ? _pos.y - _radius : _pos.y + _radius);
		#else
			return _pos.y + _radius;
		#endif
	}
	const bool GC_COLLIDER_CIRCLE::isCollide(c_lref_t a) const {
		float dx = a._pos.x - _pos.x;
		float dy = a._pos.y - _pos.y;
		float distance = abs(sqrt(dx * dx + dy * dy));
		if (distance <= (_radius + a._radius))
			return true;
		return false;
	}
	const bool GC_COLLIDER_CIRCLE::isCollide(Collider<ColliderType::Rectangle>::c_lref_t a) const {
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
	#undef GC_COLLIDER_CIRCLE
#pragma endregion
}