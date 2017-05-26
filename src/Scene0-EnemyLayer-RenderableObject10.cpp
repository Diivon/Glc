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
RenderableObject10::RenderableObject10(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(-16, -281), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\n\\1.jpg")
{
}
RenderableObject10::~RenderableObject10(){
}
void RenderableObject10::onStart(){
}
void RenderableObject10::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject10::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject10::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject10::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject10::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
std::string const & RenderableObject10::getTag(){return _tag;
}