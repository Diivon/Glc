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
class Bullet : public ::gc::TypeAliases<Bullet>{
	friend class ::gc::Camera;
	friend class ObjectsLayer;
	typedef Bullet this_t;
	Bullet & self;
	Scene0 & scene;
	ObjectsLayer & layer;
	public:
	float speed;
	float lifeTime;
	typedef ::gc::Collider<::gc::ColliderType::Circle> collider_t;
	collider_t collider;
	collider_t & getCollider(){return collider;
	};
	::gc::Sprite sprite;
	::gc::Sprite & getGraphicalComponent() noexcept {return sprite;
	}
	::gc::Sprite const & getGraphicalComponent() const noexcept{return sprite;
	};
	private:
	float _ttl;
	bool _alreadyFired;
	gc::Vec2 _dir;
	bool _isDied = false;
	u8 _hitCount = 20;
	std::string _tag;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	bool isActive = true;
	Bullet(Scene0 &, ObjectsLayer &);
	~Bullet();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	void die();
	void wake();
	void start(gc::Vec2 const & pos, gc::Vec2 const & dir);
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
			Bullet(const Bullet &) = delete;
			Bullet(Bullet &&) = delete;
			void operator = (const Bullet &) = delete;
			void operator = (Bullet &&) = delete;
		};
