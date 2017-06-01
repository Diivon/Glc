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
RenderableObject38::RenderableObject38(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(4, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 424.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 360.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject38 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject38::~RenderableObject38(){
}
void RenderableObject38::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject38::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	if (dir.getLength() > 30.0f )
	self.moveOn(dir.getNormalized());
	if (dir.getLength() < 50.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
	auto deg = gc::toDegree(acos(-dir.getNormalized().y));
	if (dir.x < 0)	deg.value *= -1;
	self.getGraphicalComponent().setRotation(deg);
	animation.update(dt);
}
const ::gc::Sprite & RenderableObject38::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject38::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject38::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject38::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject38::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject38::die(){gc::Vec2 newPos;
		u8 from_where = gc::Random<int>::get(0, 3);
		if (from_where == 0){
			newPos.x = gc::Random<float>::get(0, 800);
			newPos.y = 600;
		}
		if (from_where == 1){
			newPos.x = gc::Random<float>::get(0, 800);
			newPos.y = 0;
		}
		if (from_where == 2){
			newPos.x = 800;
			newPos.y = gc::Random<float>::get(0, 600);
		}
		if (from_where == 3){
			newPos.x = 0;
			newPos.y = gc::Random<float>::get(0, 600);
		}
		self.moveTo(newPos);
		_hp = 100;
	}
