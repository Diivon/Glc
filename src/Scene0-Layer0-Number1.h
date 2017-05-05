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
class Number1 : public ::gc::ClassTraits<Number1>{
	friend class ::gc::Camera;
	friend class Layer0;
	typedef Number1 this_t;
	Number1 & self;
	Scene0 & scene;
	Layer0 & layer;
	public:
	::gc::Event<lref_t> onMoveEvent;
	float distance;
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	::gc::Sprite sprite;
	private:
	float elapsed;
	::gc::AnimationDirection dir;
	u32 _times;
	public:
	::gc::Vec2 pos;
	Number1(Scene0 &, Layer0 &);
	~Number1();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	private:
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;}
			private:
			Number1(const Number1 &) = delete;
			Number1(Number1 &&) = delete;
			void operator = (const Number1 &) = delete;
			void operator = (Number1 &&) = delete;
		};
