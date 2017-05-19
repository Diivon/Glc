#include "Scene0.h"
Layer0::Layer0(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
Layer0::~Layer0(){
}
void Layer0::onStart(){
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void Layer0::onUpdate(const float & dt){
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void Layer0::foreach(F && f){
	f(this->getObject<Hero>());
	f(this->getObject<Bullet>());
}
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
Hero::Hero(Scene0 & sc, Layer0 & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _lookvec(1,  0), sprite("resources\\1.jpg")
{
}
Hero::~Hero(){
}
void Hero::onStart(){
}
void Hero::onUpdate(const float & dt){
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::F)){
		layer.getObject<Bullet>()
		.start(self.getCenter(), _lookvec);
		layer.getObject<Bullet>().speed = 50.0f;
	}
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::D))
	_lookvec.rotateDeg(_rotateGrade);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::A))
	_lookvec.rotateDeg(-_rotateGrade);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::W))
	self.moveOn(_lookvec);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Space))
	gc::debug.log(pos);
}
const ::gc::Sprite & Hero::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 Hero::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 Hero::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 Hero::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
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
