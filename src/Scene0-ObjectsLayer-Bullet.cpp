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
#include "Scene0.h"
Bullet::Bullet(Scene0 & sc, ObjectsLayer & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _ttl(0.0f),  _alreadyFired(false),  speed(5.0f),  lifeTime(0.0f), _tag(gc::TypeName<this_t>::get()), collider(pos,  5.00f)
, sprite("resources\\bullet.jpg")
{
}
Bullet::~Bullet(){
}
void Bullet::onStart(){
	isVisible = false;
	self.isVisible = false;
}
void Bullet::onUpdate(const float & dt){
	if (_ttl > lifeTime){
		self.die();
		return;
	}
	_ttl += dt;
	self.moveOn(_dir * speed);
	scene.getLayer<EnemyLayer>().foreach([this](auto & i){
		if (_hitCount == 0)	return;
		bool a = gc::areAtDifferentSides(
		self.getCenter(),
		self.getCenter() + (_dir * speed),
		i.getCollider().getTopLeftCorner(),
		i.getCollider().getLowRightCorner()
		);
		bool b = gc::areAtDifferentSides(
		self.getCenter(),
		self.getCenter() + (_dir * speed),
		i.getCollider().getTopRightCorner(),
		i.getCollider().getLowLeftCorner()
		);
		bool c = a || b;
		if (c && (i.getCenter() - self.getCenter()).getLength() < speed){
			i.dealDamage(40);
			--_hitCount;
		}
	});
	if (_hitCount == 0)	self.die();
}
const ::gc::Sprite & Bullet::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 Bullet::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 Bullet::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 Bullet::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void Bullet::die(){_alreadyFired = false;
	_ttl = 0.0f;
	_isDied = true;
	isVisible = false;
	isActive = false;
}
void Bullet::wake(){isVisible = true;
	isActive = true;
	_isDied = false;
	_alreadyFired = false;
	u8 _hitCount = 20;
}
void Bullet::start(gc::Vec2 const & pos, gc::Vec2 const & dir){if(_alreadyFired) return;
	if (self._isDied)
	wake();
	self.moveTo(pos);
	_alreadyFired = true;
	_dir = dir;
}
std::string const & Bullet::getTag(){return _tag;
}
