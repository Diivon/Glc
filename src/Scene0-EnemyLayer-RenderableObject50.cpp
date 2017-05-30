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
RenderableObject50::RenderableObject50(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(298, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject50::~RenderableObject50(){
}
void RenderableObject50::onStart(){
	_hp = 100;
}
void RenderableObject50::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject50::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 RenderableObject50::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject50::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject50::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject50::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject50::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject50::getTag(){return _tag;
	}
