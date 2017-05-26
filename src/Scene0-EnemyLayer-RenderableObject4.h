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
class RenderableObject4 : public ::gc::TypeAliases<RenderableObject4>{
	friend class ::gc::Camera;
	friend class EnemyLayer;
	typedef RenderableObject4 this_t;
	RenderableObject4 & self;
	Scene0 & scene;
	EnemyLayer & layer;
	public:
	typedef ::gc::Collider<::gc::ColliderType::Rectangle> collider_t;
	collider_t collider;
	::gc::Sprite sprite;
	::gc::Sprite & getGraphicalComponent() noexcept {return sprite;
	}
	::gc::Sprite const & getGraphicalComponent() const noexcept{return sprite;
	};
	private:
	std::string _tag;
	public:
	::gc::Vec2 pos;
	bool isVisible = true;
	RenderableObject4(Scene0 &, EnemyLayer &);
	~RenderableObject4();
	void onStart();
	void onUpdate(const float & dt);
	const ::gc::Sprite & getCurrentSprite() const;
	public:
	;
	std::string const & getTag();private:
	;
	public:
	gc::Vec2 getPosition() const noexcept;
	gc::Vec2 getSize() const noexcept;
	gc::Vec2 getCenter() const noexcept;
	lref_t	 moveOn(const gc::Vec2 & v)noexcept {pos += v; return *this;}
		lref_t	 moveTo(const gc::Vec2 & v)noexcept {pos = v;  return *this;}
			private:
			RenderableObject4(const RenderableObject4 &) = delete;
			RenderableObject4(RenderableObject4 &&) = delete;
			void operator = (const RenderableObject4 &) = delete;
			void operator = (RenderableObject4 &&) = delete;
		};
