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
class RenderableObject32 : public ::gc::TypeAliases<RenderableObject32>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject32 this_t;
	RenderableObject32 & self;
	Scene0 & scene;
	EnemyLayer & layer;
	public:
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	collider_t & getCollider(){return collider;
	};
	typedef ::gc::Animation<::gc::AnimationType::Cyclic> animation_t;
	animation_t animation;
	animation_t & getGraphicalComponent() noexcept {return animation;
	}
	animation_t const & getGraphicalComponent() const noexcept {return animation;
	};
	private:
	i16 _hp;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	bool isActive = true;
	RenderableObject32(Scene0 &, EnemyLayer &);
	~RenderableObject32();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	;
	void dealDamage(u16 dmg);
	void die();private:
	;
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	gc::Vec2 getCenter() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v; return *this;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;  return *this;}
			private:
			RenderableObject32(const RenderableObject32 &) = delete;
			RenderableObject32(RenderableObject32 &&) = delete;
			void operator = (const RenderableObject32 &) = delete;
			void operator = (RenderableObject32 &&) = delete;
		};
