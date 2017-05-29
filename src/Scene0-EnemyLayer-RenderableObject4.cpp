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
RenderableObject4::RenderableObject4(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(76, 590), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\n\\1.jpg")
{
}
RenderableObject4::~RenderableObject4(){
}
void RenderableObject4::onStart(){
}
void RenderableObject4::onUpdate(const float & dt){
}
const ::gc::Sprite & RenderableObject4::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject4::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject4::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject4::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
std::string const & RenderableObject4::getTag(){return _tag;
}
