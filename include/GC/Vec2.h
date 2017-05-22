#pragma once
#ifndef GC_VEC2_INC
	#define GC_VEC2_INC
#endif
#include <cmath>
#include "Utils.h"
#include "SFML/Graphics.hpp"

namespace gc
{

	struct Vec2 : public TypeAliases<Vec2>
	{
		float x, y;

		static const Vec2 zero;
		static const Vec2 right;
		static const Vec2 left;
		static const Vec2 up;
		static const Vec2 down;


		inline this_t(float x, float y);

		inline this_t() noexcept;
		inline this_t(c_lref_t) noexcept;
		inline this_t(rref_t) noexcept;
		inline lref_t operator = (c_lref_t) noexcept;
		inline lref_t operator = (rref_t) noexcept;

		#ifdef SFML_VECTOR2_HPP
			inline this_t(const sf::Vector2f &) noexcept;
			inline this_t(sf::Vector2f &&) noexcept;
			inline this_t(const sf::Vector2i &) noexcept;
			inline this_t(sf::Vector2i &&) noexcept;
			inline lref_t operator = (const sf::Vector2f &) noexcept;
			inline lref_t operator = (sf::Vector2f &&) noexcept;
			inline operator sf::Vector2f() const noexcept;
		#endif

		//getters
		inline this_t operator + () const noexcept;
		inline this_t operator - () const noexcept;
		
		inline this_t operator + (c_lref_t) const noexcept;
		inline this_t operator - (c_lref_t) const noexcept;
		inline const float operator * (c_lref_t) const noexcept;
		inline this_t operator * (float) const noexcept;
		inline this_t operator / (float) const noexcept;

		//changers
		inline c_lref_t operator += (c_lref_t) noexcept;
		inline c_lref_t operator -= (c_lref_t) noexcept;
		inline c_lref_t operator *= (float a) noexcept;
		inline c_lref_t operator /= (float a) noexcept;
		
		//getters
		inline this_t getRotatedDeg(float) const noexcept;
		inline this_t getRotatedRad(float) const noexcept;
		inline this_t getRotatedCS(float coss, float sinn) const noexcept;
		inline this_t getNormalized() const noexcept;
		inline const float getLength() const noexcept;

		//changers
		inline c_lref_t rotateDeg(float) noexcept;
		inline c_lref_t rotateRad(float) noexcept;
		inline c_lref_t rotateCS(float coss, float sinn) noexcept;
		inline c_lref_t normalize() noexcept;
		inline c_lref_t setLength(float) noexcept;
	};
		/*--IMPLEMENTATION--*/
	Vec2::Vec2(float a, float b) :
		x(a), y(b)
	{}
	Vec2::Vec2() noexcept:
		x(0.0), y(0.0)
	{}
	Vec2::Vec2(Vec2::c_lref_t a) noexcept :
		x(a.x), y(a.y)
	{}
	Vec2::Vec2(Vec2::rref_t a) noexcept :
		Vec2(a)
	{}
	Vec2::lref_t Vec2::operator = (Vec2::c_lref_t a) noexcept {
		x = a.x;
		y = a.y;
		return *this;
	}
	Vec2::lref_t Vec2::operator = (Vec2::rref_t a) noexcept {
		return *this = a;
	}
	#ifdef SFML_VECTOR2_HPP
		Vec2::Vec2(const sf::Vector2f & a) noexcept:
			x(a.x), y(a.y)
		{}
		Vec2::Vec2(sf::Vector2f && a) noexcept :
			x(a.x), y(a.y)
		{}
		Vec2::Vec2(const sf::Vector2i & a) noexcept:
			x((float)a.x), y((float)a.y)
		{}
		Vec2::Vec2(sf::Vector2i && a) noexcept :
			x((float)a.x), y((float)a.y)
		{}
		Vec2::lref_t Vec2::operator = (const sf::Vector2f & a) noexcept {
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2::lref_t Vec2::operator = (sf::Vector2f && a) noexcept {
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2::operator sf::Vector2f () const noexcept {
			return sf::Vector2f(x, y);
		}
	#endif
	Vec2::this_t Vec2::operator + () const noexcept{
		return Vec2(x, y);
	}
	Vec2::this_t Vec2::operator - () const noexcept{
		return Vec2(-x, -y);
	}
	Vec2::this_t Vec2::operator + (Vec2::c_lref_t a) const noexcept{
		return Vec2(x + a.x, y + a.y);
	}
	Vec2::this_t Vec2::operator - (Vec2::c_lref_t a) const noexcept{
		return Vec2(x - a.x, y - a.y);
	}
	const float Vec2::operator * (Vec2::c_lref_t a) const noexcept{
		return (x * a.x) + (y * a.y);
	}
	Vec2::this_t Vec2::operator * (float a) const noexcept{
		return Vec2(x * a, y * a);
	}
	Vec2::this_t Vec2::operator / (float a) const noexcept{
		return Vec2(x / a, y / a);
	}
	Vec2::c_lref_t Vec2::operator += (Vec2::c_lref_t a) noexcept{
		x += a.x;
		y += a.y;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator -= (Vec2::c_lref_t a) noexcept{
		x -= a.x;
		y -= a.y;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator *= (float a) noexcept{
		x *= a;
		y *= a;
		return *this;
	}
	Vec2::c_lref_t Vec2::operator /= (float a) noexcept{
		return *this;
	}
	Vec2::this_t Vec2::getRotatedDeg(float a) const noexcept{
		a = a / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::this_t Vec2::getRotatedRad(float a) const noexcept{
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::this_t Vec2::getRotatedCS(float coss, float sinn) const noexcept{
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2::this_t Vec2::getNormalized() const noexcept{
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
		float coss = std::cos(a);
		float sinn = std::sin(a);
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
		if (x == 0 && y == 0) return *this;
		float len = this->getLength();
		x /= len; y /= len;
		x *= l;	  y *= l;
		return *this;
	}
}