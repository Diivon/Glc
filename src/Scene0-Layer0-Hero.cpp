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
, _lookvec(0,  -1), sprite("resources\\Hero.png")
{
}
Hero::~Hero(){
}
void Hero::onStart(){
}
void Hero::onUpdate(const float & dt){
	if (gc::Mouse::isButtonPressed(gc::Mouse::Button::Left)){
		layer.getObject<Bullet>().start(self.getCenter(), _lookvec);
		layer.getObject<Bullet>().speed = 50.0f;
	}
	auto dir = gc::Mouse::getWorldPosition() - self.getCenter();
	_lookvec = dir.getNormalized();
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::W))
	self.moveOn(_lookvec * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::S))
	self.moveOn(_lookvec * -_speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::D))
	self.moveOn(_lookvec.getRotatedDeg(90) * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::A))
	self.moveOn(_lookvec.getRotatedDeg(-90) * _speed);
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
