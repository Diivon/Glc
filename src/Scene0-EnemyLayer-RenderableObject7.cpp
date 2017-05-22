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
RenderableObject7::RenderableObject7(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(347, -146), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject7::~RenderableObject7(){
}
void RenderableObject7::onStart(){
}
void RenderableObject7::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject7::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject7::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject7::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject7::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
