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
class ObjectsLayer;
class Hero : public ::gc::TypeAliases<Hero>{
	friend class ::gc::Camera;
	friend class ObjectsLayer;
	typedef Hero this_t;
	Hero & self;
	Scene0 & scene;
	ObjectsLayer & layer;
	public:
	::gc::Sprite sprite;
	::gc::Sprite & getGraphicalComponent() noexcept {return sprite;
	}
	::gc::Sprite const & getGraphicalComponent() const noexcept{return sprite;
	};
	private:
	gc::Vec2 _lookvec;
	const float _rotateGrade = 5.0f;
	const float _speed = 5.0f;
	bool _isFirstWeapon = true;
	i16 _hp;
	bool _isAlive = true;
	std::string _tag;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	bool isActive = true;
	Hero(Scene0 &, ObjectsLayer &);
	~Hero();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	void shoot(gc::Vec2 const & dir);
	void tryMove(gc::Vec2 const & dir);
	void dealDamage(u16 dmg);
	void die();
	bool isAlive();
	std::string const & getTag();
	;private:
	;
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
