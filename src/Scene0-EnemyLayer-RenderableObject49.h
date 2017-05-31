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
class RenderableObject49 : public ::gc::TypeAliases<RenderableObject49>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject49 this_t;
	RenderableObject49 & self;
	Scene0 & scene;
	EnemyLayer & layer;
	public:
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	collider_t & getCollider(){return collider;
	};
	::gc::Sprite sprite;
	::gc::Sprite & getGraphicalComponent() noexcept {return sprite;
	}
	::gc::Sprite const & getGraphicalComponent() const noexcept{return sprite;
	};
	private:
	i16 _hp;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	bool isActive = true;
	RenderableObject49(Scene0 &, EnemyLayer &);
	~RenderableObject49();
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
			RenderableObject49(const RenderableObject49 &) = delete;
			RenderableObject49(RenderableObject49 &&) = delete;
			void operator = (const RenderableObject49 &) = delete;
			void operator = (RenderableObject49 &&) = delete;
		};
