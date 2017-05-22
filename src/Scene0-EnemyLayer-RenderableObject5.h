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
class EnemyLayer;
class RenderableObject5 : public ::gc::TypeAliases<RenderableObject5>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject5 this_t;
	RenderableObject5 & self;
	Scene0 & scene;
	EnemyLayer & layer;
	public:
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	::gc::Sprite sprite;
	private:
	;
	public:
	::gc::Vec2 pos;
	RenderableObject5(Scene0 &, EnemyLayer &);
	~RenderableObject5();
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
			RenderableObject5(const RenderableObject5 &) = delete;
			RenderableObject5(RenderableObject5 &&) = delete;
			void operator = (const RenderableObject5 &) = delete;
			void operator = (RenderableObject5 &&) = delete;
		};
