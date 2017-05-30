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
RenderableObject42::RenderableObject42(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(679, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject42::~RenderableObject42(){
}
void RenderableObject42::onStart(){
	_hp = 100;
}
void RenderableObject42::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject42::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject42::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject42::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject42::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject42::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject42::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject42::getTag(){return _tag;
	}
