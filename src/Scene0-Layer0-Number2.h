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
class Number2 : public ::gc::TypeAliases<Number2>{
	friend class ::gc::Camera;
	friend class Layer0;
	typedef Number2 this_t;
	Number2 & self;
	Scene0 & scene;
	Layer0 & layer;
	public:
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	typedef ::gc::Animation<::gc::AnimationType::PingPong> animation_t;
	animation_t animation;
	private:
	int _count;
	bool _isRight;
	public:
	::gc::Vec2 pos;
	Number2(Scene0 &, Layer0 &);
	~Number2();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	void kek(Number1 & a);
	private:
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;}
			private:
			Number2(const Number2 &) = delete;
			Number2(Number2 &&) = delete;
			void operator = (const Number2 &) = delete;
			void operator = (Number2 &&) = delete;
		};
