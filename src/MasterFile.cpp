#include "Scene0.h"
Layer0::Layer0(Scene0 & sc):
scene(sc)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
Layer0::~Layer0(){
}
void Layer0::onStart(){
	isDone = false;
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void Layer0::onUpdate(const float & dt){
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
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
Number1::Number1(Scene0 & sc, Layer0 & lr):
self(*this), pos(50, 50), scene(sc), layer(lr)
, distance(0), collider(::gc::Vec2(50,  50),  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
	gc::debug.write("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
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
	.clear()
	.write(distance)
	.newLine()
	.write(layer.getObject<Number2>().collider.isCollide(self.collider));
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Space))
	gc::debug
	.newLine()
	.write( (scene.getLayer<Layer1>().getObject<PhysicalObject2>().pos - pos).getLength() );
	collider.moveTo(pos);
}
const ::gc::Sprite Number1::getCurrentSprite() const{
	return sprite;
}
::gc::Sprite Number1::getCurrentSprite(){
	return sprite;
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
Number2::Number2(Scene0 & sc, Layer0 & lr):
self(*this), pos(50, 100), scene(sc), layer(lr)
, collider(::gc::Vec2(50,  100),  ::gc::Vec2(50,  50))
, animation()
{
	animation.emplaceFrame("resources\\n\\1.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\2.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\3.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\4.jpg", 500.00f);
}
Number2::~Number2(){
}
void Number2::onStart(){
	layer.getObject<Number1>().onMoveEvent.sign(*this, &this_t::kek);
	_isRight = true;
	_count = 0;
	animation.start();
}
void Number2::onUpdate(const float & dt){
	if (_count == 2)
	layer.isDone = true;
	collider.moveTo(pos);
	animation.update(dt);
}
const ::gc::Sprite Number2::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Sprite Number2::getCurrentSprite(){
	return animation.getCurrentSprite();
}
void Number2::kek(Number1 & a){if(a.pos.x > pos.x)
	{
		if (!_isRight)
		{
			_isRight = true;
			++_count;
		}
	}
	else
	if (_isRight)
	{
		_isRight = false;
		++_count;
	}
}
#include "Scene0.h"
Layer1::Layer1(Scene0 & sc):
scene(sc)
, ObjPhysicalObject2(scene, *this)
{
}
Layer1::~Layer1(){
}
void Layer1::onStart(){
	ObjPhysicalObject2.onStart();
}
void Layer1::onUpdate(const float & dt){
	ObjPhysicalObject2.onUpdate(dt);
}
#include "Scene0.h"
PhysicalObject2::PhysicalObject2(Scene0 & sc, Layer1 & lr):
self(*this), pos(::gc::Vec2(-200, -200)), scene(sc), layer(lr)
{
}
PhysicalObject2::~PhysicalObject2(){
}
void PhysicalObject2::onStart(){
}
void PhysicalObject2::onUpdate(const float & dt){
}