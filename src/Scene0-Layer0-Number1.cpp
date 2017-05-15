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
Number1::Number1(Scene0 & sc, Layer0 & lr):
self(*this), pos(50, 50), scene(sc), layer(lr)
, distance(0), collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
Number1::~Number1(){
}
void Number1::onStart(){
	elapsed = 0.0f;
	_times = 0;
	dir = ::gc::AnimationDirection::Forward;
}
void Number1::onUpdate(const float & dt){
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::W))
	--pos.y;
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::S))
	++pos.y;
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::A))
	--pos.x;
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::D))
	++pos.x;
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::F))
	{
		pos.x += gc::Random<float>::get(-5, 5);
		pos.y += gc::Random<float>::get(-5, 5);
	}
	distance = (pos - layer.getObject<Number2>().pos).getLength();
	gc::debug
	.log("----------------------------------------------")
	.log(distance)
	.log(layer.getObject<Number2>().collider.isCollide(self.collider), ' ', self.collider.getSize());
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Space))
	gc::debug
	.log( (scene.getLayer<Layer1>().getObject<PhysicalObject2>().pos - pos).getLength() );
}
const ::gc::Sprite & Number1::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 Number1::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 Number1::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
