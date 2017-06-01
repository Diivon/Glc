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
RenderableObject5::RenderableObject5(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(190, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 452.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 536.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject5 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject5::~RenderableObject5(){
}
void RenderableObject5::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject5::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject5::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject5::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject5::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject5::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject5::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject5::die(){gc::Vec2 newPos;
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
