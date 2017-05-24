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
RenderableObject8::RenderableObject8(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(-66, -158), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject8::~RenderableObject8(){
}
void RenderableObject8::onStart(){
}
void RenderableObject8::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject8::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject8::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject8::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject8::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
