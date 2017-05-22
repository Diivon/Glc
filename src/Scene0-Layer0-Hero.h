#pragma once
#include <string>
#include <iostream>
#include <utility>
#include "Glance.h"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include <cmath>
class Scene0;
class Layer0;
class Hero : public ::gc::TypeAliases<Hero>{
	friend class ::gc::Camera;
	friend class Layer0;
	typedef Hero this_t;
	Hero & self;
	Scene0 & scene;
	Layer0 & layer;
	public:
	::gc::Sprite sprite;
	private:
	gc::Vec2 _lookvec;
	const float _rotateGrade = 5.0f;
	const float _speed = 5.0f;
	public:
	::gc::Vec2 pos;
	Hero(Scene0 &, Layer0 &);
	~Hero();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	private:
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	gc::Vec2 getCenter() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v; return *this;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;  return *this;}
			private:
			Hero(const Hero &) = delete;
			Hero(Hero &&) = delete;
			void operator = (const Hero &) = delete;
			void operator = (Hero &&) = delete;
		};
