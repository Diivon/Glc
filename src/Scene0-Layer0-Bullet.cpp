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
Bullet::Bullet(Scene0 & sc, Layer0 & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _ttl(0.0f),  _isActive(false),  speed(5.0f), sprite("resources\\bullet.jpg")
{
}
Bullet::~Bullet(){
}
void Bullet::onStart(){
}
void Bullet::onUpdate(const float & dt){
	if (_isActive){
		self.moveOn(_dir * speed);
		_ttl += dt;
	}
	if (_ttl > 1500){
		_isActive = false;
		_ttl = 0.0f;
		pos = gc::Vec2(-1000, -1000);
	}
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
void Bullet::start(gc::Vec2 const & pos, gc::Vec2 const & dir){if(_isActive) return;
	self.moveTo(pos);
	_isActive = true;
	_dir = dir;
	gc::debug.log("Shoot!");
}
