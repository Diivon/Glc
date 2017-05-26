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
RenderableObject6::RenderableObject6(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(209, 21), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\n\\1.jpg")
{
}
RenderableObject6::~RenderableObject6(){
}
void RenderableObject6::onStart(){
}
void RenderableObject6::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject6::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject6::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject6::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject6::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
std::string const & RenderableObject6::getTag(){return _tag;
}
