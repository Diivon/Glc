#pragma once
#include <cmath>
#include "GC/Utils.h"
#include "SFML/Graphics.hpp"

namespace gc
{
	enum class Direction
	{
		Ahead,
		Back,
		Right,
		Left
	};

	struct Vec2 : public ClassTraits<Vec2>
	{
		float x, y;

		static const Vec2 Zero;
		
		this_t() noexcept;
		this_t(c_lref_t) noexcept;
		this_t(rref_t) noexcept;
		lref_t operator = (c_lref_t) noexcept;
		lref_t operator = (rref_t) noexcept;
		~this_t() noexcept;

		#ifdef SFML_VECTOR2_HPP
			this_t(const sf::Vector2f &) noexcept;
			this_t(sf::Vector2f &&) noexcept;
			lref_t operator = (const sf::Vector2f &) noexcept;
			lref_t operator = (sf::Vector2f &&) noexcept;
			operator sf::Vector2f() const noexcept;
		#endif

		//getters
		c_this_t operator + () const noexcept;
		c_this_t operator - () const noexcept;
		
		c_this_t operator + (c_lref_t) const noexcept;
		c_this_t operator - (c_lref_t) const noexcept;
		const float operator * (c_lref_t) const noexcept;
		c_this_t operator * (float) const noexcept;
		c_this_t operator / (float) const noexcept;

		//changers
		c_lref_t operator += (c_lref_t) const noexcept;
		c_lref_t operator -= (c_lref_t) const noexcept;
		c_lref_t operator *= (float a) const noexcept;
		c_lref_t operator /= (float a) const noexcept;
		
		//getters
		c_this_t getRotatedDeg(float) const noexcept;
		c_this_t getRotatedRad(float) const noexcept;
		c_this_t getRotatedCS(float coss, float sinn) const noexcept;
		c_this_t getNormalized() const noexcept;
		const float getLength() const noexcept;

		//changers
		c_lref_t rotateDeg(float) noexcept;
		c_lref_t rotateRad(float) noexcept;
		c_lref_t rotateCS(float coss, float sinn) noexcept;
		c_lref_t normalize() noexcept;
		c_lref_t setLength(float) noexcept;
	};
		/*--IMPLEMENTATION--*/
	Vec2::Vec2():
		x(0.0), y(0.0)
	{}
	Vec2::Vec2(Vec2::c_lref_t a):
		x(a.x), y(a.y)
	{}
	Vec2::Vec2(Vec::rref_t a):
		*this(a)
	{}
	Vec2::lref_t operator = (Vec2::c_lref_t a){
		x = a.x;
		y = a.y;
		return *this;
	}
	Vec2::lref_t operator = (Vec2::rref_t a){
		return *this = a;
	}
	Vec2::~Vec2(){}
	#ifdef SFML_VECTOR2_HPP
		Vec2::Vec2(const sf::Vector2f & a):
			x(a.x), y(a.y)
		{}
		Vec2::Vec2(sf::Vector2f && a):
			x(a.x), y(a.y)
		{}
		Vec2::lref_t operator = (const sf::Vector2f & a){
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2::lref_t operator = (sf::Vector2f && a){
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2::operator sf::Vector2f (){
			return sf::Vector2f(x, y);
		}
	#endif
	Vec2::c_this_t Vec2::operator + () const noexcept{
		return Vec2(+x, +y);
	}
	Vec2::c_this_t Vec::operator - () const noexcept{
		return Vec2(-x, -y);
	}
	Vec2::c_this_t Vec2::operator + (Vec2::c_lref_t a) const noexcept{
		return Vec2(x + a.x, y + a.y);
	}
	Vec2::c_this_t Vec2::operator - (Vec2::c_lref_t a) const noexcept{
		return Vec2(x - a.x, y - a.y);
	}
	const float Vec2::operator * (Vec2::c_lref_t a) const noexcept{
		return (x * a.x) + (y * a.y);
	}
	Vec2::c_this_t Vec2::operator * (float a) const noexcept{
		if (a == 0)
			return Vec2::zero;
		return Vec2(x * a, y * a);
	}
	Vec2::c_this_t Vec2::operator / (float a) const noexcept{
		if (a == 0)
			return Vec2::zero;
		return Vec2(x / a, y / a);
	}
	Vec2::c_lref_t Vec2::operator += (Vec2::c_lref_t a) const noexcept{
		x += a.x;
		y += a.y;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator -= (Vec2::C_lref_t a) const noexcept{
		x -= a.x;
		y -= a.y;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator *= (float a) const noexcept{
		x *= a;
		y *= a;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator /= (float a) const noexcept{
		if (a == 0)
			*this = Vec2::zero;
		return *this;
	}
	Vec2::c_this_t Vec2::getRotatedDeg(float a) const noexcept{
		a = a / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::c_this_t Vec2::getRotatedRad(float a) const noexcept{
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::c_this_t Vec2::getRotatedCS(float coss, float sinn) const noexcept{
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::c_this_t Vec2::getNormalized() const noexcept{
		if (x == 0 && y == 0) 
			return Vec2::zero;
		float len = this->getLength();
		float nx = x / len;
		float ny = y / len;
		return Vec2(nx, ny);
	}
	const float Vec2::getLength() const noexcept{
		return sqrt(x * x + y * y);
	}
	Vec2::c_lref_t Vec2::rotateDeg(float a) noexcept{
		a = a / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		float newX = x * coss - y * sinn;	//x*coss - y*sinn
		y = x * sinn + y * coss;			//x*sinn + y*coss
		x = newX;
		return *this;
	}
	Vec2::c_lref_t Vec2::rotateRad(float a) noexcept{
		float coss = std::cos(radian);
		float sinn = std::sin(radian);
		float newX = x * coss - y * sinn;		//x*coss - y*sinn
		y = x * sinn + y * coss;		//x*sinn + y*coss
		x = newX;
		return *this;
	}
	Vec2::c_lref_t Vec2::rotateCS(float coss, float sinn) noexcept{
		float newX = x * coss - y * sinn;		//x*coss - y*sinn
		y = x * sinn + y * coss;		//x*sinn + y*coss
		x = newX;
		return *this;
	}
	Vec2::c_lref_t Vec2::normalize() noexcept{
		if (x == 0 && y == 0) 
			return *this;
		float len = this->getLength();
		x /= len;
		y /= len;
		return *this;
	}
	Vec2::c_lref_t Vec2::setLength(float l) noexcept{
		if (l == 0)
			return *this = Vec2::zero;
		if (x == 0 && y == 0) return *this;
		float len = this->getLength();
		x /= len; y /= len;
		x *= l;	  y *= l;
		return *this;
	}
}