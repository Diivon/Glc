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
Hero::Hero(Scene0 & sc, ObjectsLayer & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _lookvec(0,  -1), _tag(gc::TypeName<this_t>::get()), sprite("resources\\soldier\\Soldier1.png")
{
}
Hero::~Hero(){
}
void Hero::onStart(){
	scene.getRenderer().getCamera().followSpeed = 0.2;
}
void Hero::onUpdate(const float & dt){
	if (gc::Mouse::isButtonPressed(gc::Mouse::Button::Left))
	self.shoot(_lookvec);
	_lookvec = (gc::Mouse::getWorldPosition() - self.getCenter()).normalize();
	auto deg = gc::toDegree(acos(-_lookvec.y));
	if (_lookvec.x < 0)	deg.value *= -1;
	self.getGraphicalComponent().setRotation(deg);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::W))
	self.moveOn(gc::Vec2::up * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::S))
	self.moveOn(gc::Vec2::down * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::D))
	self.moveOn(gc::Vec2::right * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::A))
	self.moveOn(gc::Vec2::left * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num1)){
		self._isFirstWeapon = true;
	}
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num2)){
		self._isFirstWeapon = false;
	}
	scene.getRenderer().getCamera().moveTo( (self.getCenter() + (_lookvec * _speed * 20)) );
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
void Hero::shoot(gc::Vec2 const & dir){if (_isFirstWeapon){
	layer.getObject<Bullet>().start(self.getCenter(), dir);
	layer.getObject<Bullet>().speed = 50.0f;
	layer.getObject<Bullet>().lifeTime = 1000.0f;
}
else{
	layer.getObject<Bullet>().start(self.getCenter(), dir.getRotated(sh::degree(gc::Random<float>::get(-50, 50))));
	layer.getObject<Bullet>().speed = 250.0f;
	layer.getObject<Bullet>().lifeTime = 100.0f;
}
}
std::string const & Hero::getTag(){return _tag;
}
