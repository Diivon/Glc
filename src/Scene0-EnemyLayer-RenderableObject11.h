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
class RenderableObject11 : public ::gc::TypeAliases<RenderableObject11>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject11 this_t;
	RenderableObject11 & self;
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
	bool isVisible = true;
	RenderableObject11(Scene0 &, EnemyLayer &);
	~RenderableObject11();
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
			RenderableObject11(const RenderableObject11 &) = delete;
			RenderableObject11(RenderableObject11 &&) = delete;
			void operator = (const RenderableObject11 &) = delete;
			void operator = (RenderableObject11 &&) = delete;
		};
