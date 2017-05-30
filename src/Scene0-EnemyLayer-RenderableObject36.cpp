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
RenderableObject36::RenderableObject36(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(27, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject36::~RenderableObject36(){
}
void RenderableObject36::onStart(){
	_hp = 100;
}
void RenderableObject36::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject36::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject36::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject36::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject36::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject36::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject36::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject36::getTag(){return _tag;
	}
