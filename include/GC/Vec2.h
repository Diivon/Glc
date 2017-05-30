#pragma once
#ifndef GC_VEC2_INC
	#define GC_VEC2_INC
#endif
#include <cmath>
#include "Utils.h"
#include "SemanticHelpers.h"

#include "SFML/Graphics.hpp"

namespace gc
{

	struct Vec2
	{
		GC_REGISTER_TYPE_ALIASES(Vec2)
		float x, y;

		static const Vec2 zero;
		static const Vec2 right;
		static const Vec2 left;
		static const Vec2 up;
		static const Vec2 down;


		inline Vec2(float x, float y);

		inline Vec2() noexcept;
		inline Vec2(c_lref_t) noexcept;
		inline Vec2(rref_t) noexcept;
		inline lref_t operator = (c_lref_t) noexcept;
		inline lref_t operator = (rref_t) noexcept;

		#ifdef SFML_VECTOR2_HPP
			inline Vec2(const sf::Vector2f &) noexcept;
			inline Vec2(sf::Vector2f &&) noexcept;
			inline Vec2(const sf::Vector2i &) noexcept;
			inline Vec2(sf::Vector2i &&) noexcept;
			inline lref_t operator = (const sf::Vector2f &) noexcept;
			inline lref_t operator = (sf::Vector2f &&) noexcept;
			inline operator sf::Vector2f() const noexcept;
		#endif

		//getters
		inline Vec2 operator + () const noexcept;
		inline Vec2 operator - () const noexcept;
		
		inline Vec2 operator + (c_lref_t) const noexcept;
		inline Vec2 operator - (c_lref_t) const noexcept;
		inline const float operator * (c_lref_t) const noexcept;
		inline Vec2 operator * (float) const noexcept;
		inline Vec2 operator / (float) const noexcept;

		//changers
		inline c_lref_t operator += (c_lref_t) noexcept;
		inline c_lref_t operator -= (c_lref_t) noexcept;
		inline c_lref_t operator *= (float a) noexcept;
		inline c_lref_t operator /= (float a) noexcept;
		
		//getters
		template<class T>
		inline Vec2 getRotated(sh::priv::degree_t<T> const &) const noexcept;
		template<class T>
		inline Vec2 getRotated(sh::priv::radian_t<T> const &) const noexcept;
		inline Vec2 getRotatedCS(float coss, float sinn) const noexcept;
		inline Vec2 getNormalized() const noexcept;
		inline const float getLength() const noexcept;

		//changers
		template<class T>
		inline c_lref_t rotate(sh::priv::degree_t<T> const &) noexcept;
		template<class T>
		inline c_lref_t rotate(sh::priv::radian_t<T> const &) noexcept;
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
	Vec2 Vec2::operator + () const noexcept{
		return Vec2(x, y);
	}
	Vec2 Vec2::operator - () const noexcept{
		return Vec2(-x, -y);
	}
	Vec2 Vec2::operator + (Vec2::c_lref_t a) const noexcept{
		return Vec2(x + a.x, y + a.y);
	}
	Vec2 Vec2::operator - (Vec2::c_lref_t a) const noexcept{
		return Vec2(x - a.x, y - a.y);
	}
	const float Vec2::operator * (Vec2::c_lref_t a) const noexcept{
		return (x * a.x) + (y * a.y);
	}
	Vec2 Vec2::operator * (float a) const noexcept{
		return Vec2(x * a, y * a);
	}
	Vec2 Vec2::operator / (float a) const noexcept{
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
	template<class T>
	Vec2 Vec2::getRotated(sh::priv::degree_t<T> const & d) const noexcept{
		auto a = ((float)d.value) / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	template<class T>
	Vec2 Vec2::getRotated(sh::priv::radian_t<T> const & a) const noexcept{
		float coss = cos((float)a.value);
		float sinn = sin((float)a.value);
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2 Vec2::getRotatedCS(float coss, float sinn) const noexcept{
		return Vec2(x * coss - y * sinn, x * sinn + y * coss);
	}
	Vec2 Vec2::getNormalized() const noexcept{
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
	template<class T>
	Vec2::c_lref_t Vec2::rotate(sh::priv::degree_t<T> const & d) noexcept{
		auto a = ((float)d.value) / 180 * Pi;
		float coss = cos(a);
		float sinn = sin(a);
		float newX = x * coss - y * sinn;	//x*coss - y*sinn
		y = x * sinn + y * coss;			//x*sinn + y*coss
		x = newX;
		return *this;
	}
	template<class T>
	Vec2::c_lref_t Vec2::rotate(sh::priv::radian_t<T> const & a) noexcept{
		float coss = std::cos((float)a.value);
		float sinn = std::sin((float)a.value);
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
	inline bool areAtDifferentSides(Vec2 const & vb, Vec2 const & ve, gc::Vec2 p1, gc::Vec2 p2){
		auto normalizedVec = ve - vb;
		if (normalizedVec.y == 0.0f)
			return true;
		auto k = normalizedVec.y / normalizedVec.x;
		p1 -= vb;
		p2 -= vb;

		bool isFirstLess  = p1.y < k * p1.x;//ignore if it on line
		bool isSecondLess = p2.y < k * p2.x;//ignore if it on line

		return isSecondLess != isFirstLess;
	}
}