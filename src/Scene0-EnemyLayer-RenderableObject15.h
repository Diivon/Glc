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
class RenderableObject15 : public ::gc::TypeAliases<RenderableObject15>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject15 this_t;
	RenderableObject15 & self;
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
	std::string _tag;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	bool isActive = true;
	RenderableObject15(Scene0 &, EnemyLayer &);
	~RenderableObject15();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	;
	void dealDamage(u16 dmg);
	void die();
	std::string const & getTag();private:
	;
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	gc::Vec2 getCenter() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v; return *this;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;  return *this;}
			private:
			RenderableObject15(const RenderableObject15 &) = delete;
			RenderableObject15(RenderableObject15 &&) = delete;
			void operator = (const RenderableObject15 &) = delete;
			void operator = (RenderableObject15 &&) = delete;
		};
