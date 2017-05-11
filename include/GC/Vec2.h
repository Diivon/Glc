#pragma once
#ifndef GC_VEC2_INC
	#define GC_VEC2_INC
#endif
#include <cmath>
#include "Utils.h"
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

	struct Vec2
	{
		float x, y;

		static const Vec2 zero;
		inline Vec2(float x, float y);

		inline Vec2() noexcept;
		inline Vec2(Vec2 const &) noexcept;
		inline Vec2(Vec2 &&) noexcept;
		inline Vec2 & operator = (Vec2 const &) noexcept;
		inline Vec2 & operator = (Vec2 &&) noexcept;

		#ifdef SFML_VECTOR2_HPP
			inline Vec2(const sf::Vector2f &) noexcept;
			inline Vec2(sf::Vector2f &&) noexcept;
			inline Vec2 & operator = (const sf::Vector2f &) noexcept;
			inline Vec2 & operator = (sf::Vector2f &&) noexcept;
			inline operator sf::Vector2f() const noexcept;
		#endif

		//getters
		inline const Vec2 operator + () const noexcept;
		inline const Vec2 operator - () const noexcept;
		
		inline const Vec2 & operator + (const Vec2 &) const noexcept;
		inline const Vec2 & operator - (const Vec2 &) const noexcept;
		inline const float operator * (const Vec2 &) const noexcept;
		inline const Vec2 & operator * (float) const noexcept;
		inline const Vec2 & operator / (float) const noexcept;

		//changers
		inline const Vec2 & operator += (const Vec2 &) noexcept;
		inline const Vec2 & operator -= (const Vec2 &) noexcept;
		inline const Vec2 & operator *= (float a) noexcept;
		inline const Vec2 & operator /= (float a) noexcept;
		
		//getters
		inline const Vec2 getRotatedDeg(float) const noexcept;
		inline const Vec2 getRotatedRad(float) const noexcept;
		inline const Vec2 getRotatedCS(float coss, float sinn) const noexcept;
		inline const Vec2 getNormalized() const noexcept;
		inline const float getLength() const noexcept;

		//changers
		inline const Vec2 & rotateDeg(float) noexcept;
		inline const Vec2 & rotateRad(float) noexcept;
		inline const Vec2 & rotateCS(float coss, float sinn) noexcept;
		inline const Vec2 & normalize() noexcept;
		inline const Vec2 & setLength(float) noexcept;
	};
		/*--IMPLEMENTATION--*/
	Vec2::Vec2(float a, float b) :
		x(a), y(b)
	{}
	Vec2::Vec2() noexcept:
		x(0.0), y(0.0)
	{}
	Vec2::Vec2(const Vec2 & a) noexcept :
		x(a.x), y(a.y)
	{}
	Vec2::Vec2(Vec2 && a) noexcept :
		Vec2(a)
	{}
	Vec2 & Vec2::operator = (const Vec2 & a) noexcept {
		x = a.x;
		y = a.y;
		return *this;
	}
	Vec2 & Vec2::operator = (Vec2 && a) noexcept {
		return *this = a;
	}
	#ifdef SFML_VECTOR2_HPP
		Vec2::Vec2(const sf::Vector2f & a) noexcept:
			x(a.x), y(a.y)
		{}
		Vec2::Vec2(sf::Vector2f && a) noexcept :
			x(a.x), y(a.y)
		{}
		Vec2 & Vec2::operator = (const sf::Vector2f & a) noexcept {
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2 & Vec2::operator = (sf::Vector2f && a) noexcept {
			x = a.x;
			y = a.y;
			return *this;
		}
		Vec2::operator sf::Vector2f () const noexcept {
			return sf::Vector2f(x, y);
		}
	#endif
	const Vec2 Vec2::operator + () const noexcept{
		return Vec2(x, y);
	}
	const Vec2 Vec2::operator - () const noexcept{
		return Vec2(-x, -y);
	}
	const Vec2 & Vec2::operator + (const Vec2 & a) const noexcept{
		return Vec2(x + a.x, y + a.y);
	}
	const Vec2 & Vec2::operator - (const Vec2 & a) const noexcept{
		return Vec2(x - a.x, y - a.y);
	}
	const float Vec2::operator * (const Vec2 & a) const noexcept{
		return (x * a.x) + (y * a.y);
	}
	const Vec2 & Vec2::operator * (float a) const noexcept{
		return Vec2(x * a, y * a);
	}
	const Vec2 & Vec2::operator / (float a) const noexcept{
		return Vec2(x / a, y / a);
	}
	const Vec2 & Vec2::operator += (const Vec2 & a) noexcept{
		x += a.x;
		y += a.y;
		return *this;
	}
	const Vec2 & Vec2::operator -= (const Vec2 & a) noexcept{
		x -= a.x;
		y -= a.y;
		return *this;
	}
	const Vec2 & Vec2::operator *= (float a) noexcept{
		x *= a;
		y *= a;
		return *this;
	}
	const Vec2 & Vec2::operator /= (float a) noexcept{
		return *this;
	}
	const Vec2 Vec2::getRotatedDeg(float a) const noexcept{
		a = a / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	const Vec2 Vec2::getRotatedRad(float a) const noexcept{
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	const Vec2 Vec2::getRotatedCS(float coss, float sinn) const noexcept{
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	const Vec2 Vec2::getNormalized() const noexcept{
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
	const Vec2 & Vec2::rotateDeg(float a) noexcept{
		a = a / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		float newX = x * coss - y * sinn;	//x*coss - y*sinn
		y = x * sinn + y * coss;			//x*sinn + y*coss
		x = newX;
		return *this;
	}
	const Vec2 & Vec2::rotateRad(float a) noexcept{
		float coss = std::cos(a);
		float sinn = std::sin(a);
		float newX = x * coss - y * sinn;		//x*coss - y*sinn
		y = x * sinn + y * coss;		//x*sinn + y*coss
		x = newX;
		return *this;
	}
	const Vec2 & Vec2::rotateCS(float coss, float sinn) noexcept{
		float newX = x * coss - y * sinn;		//x*coss - y*sinn
		y = x * sinn + y * coss;		//x*sinn + y*coss
		x = newX;
		return *this;
	}
	const Vec2 & Vec2::normalize() noexcept{
		if (x == 0 && y == 0) 
			return *this;
		float len = this->getLength();
		x /= len;
		y /= len;
		return *this;
	}
	const Vec2 & Vec2::setLength(float l) noexcept{
		if (x == 0 && y == 0) return *this;
		float len = this->getLength();
		x /= len; y /= len;
		x *= l;	  y *= l;
		return *this;
	}
}