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
RenderableObject2::RenderableObject2(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(139, 159), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\n\\1.jpg")
{
}
RenderableObject2::~RenderableObject2(){
}
void RenderableObject2::onStart(){
}
void RenderableObject2::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject2::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject2::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject2::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject2::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
std::string const & RenderableObject2::getTag(){return _tag;
}
