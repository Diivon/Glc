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
Hero::Hero(Scene0 & sc, ObjectsLayer & lr) try:
self(*this), pos(400, 300), scene(sc), layer(lr)
, _lookvec(0,  -1),  _hp(100), animation()
{
	animation.emplaceFrame("resources\\soldier\\Soldier1.png", 400.00f);
	animation.emplaceFrame("resources\\soldier\\Soldier2.png", 400.00f);
}
catch(std::exception & e){
	std::cout << "Hero throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
Hero::~Hero(){
}
void Hero::onStart(){
	scene.getRenderer().getCamera().followSpeed = 0.2;
	scene.getRenderer().getCamera().moveTo({400, 300});
		animation.start();
	}
	void Hero::onUpdate(const float & dt){
		if (self._hp <= 0){
			self.die();
			return;
		}
		if (gc::Mouse::isButtonPressed(gc::Mouse::Button::Left)){
			self.shoot(_lookvec);
		}
		_lookvec = (gc::Mouse::getWorldPosition() - self.getCenter()).normalize();
		auto deg = gc::toDegree(acos(-_lookvec.y));
		if (_lookvec.x < 0)	deg.value *= -1;
		self.getGraphicalComponent().setRotation(deg);
		scene.getRenderer().render(
		gc::Line()
		.setBegin(self.getCenter() + gc::Vec2{-50, -100})
			.setEnd(self.getCenter() + gc::Vec2{50, -100})
				.setColor(gc::Color::Red)
				.setThickness(9)
				);
				scene.getRenderer().render(
				gc::Line()
				.setBegin(self.getCenter() + gc::Vec2{-50, -98})
					.setEnd(self.getCenter() + gc::Vec2{-50.0f + _hp, -98})
						.setColor(gc::Color::Green)
						.setThickness(5)
						);
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::W))
						self.tryMove(_lookvec * _speed);
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::S))
						self.tryMove(_lookvec * -_speed);
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::D))
						self.tryMove(_lookvec.getRotated(sh::degree(90.0f)) * _speed);
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::A))
						self.tryMove(_lookvec.getRotated(sh::degree(-90.0f)) * _speed);
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num1)){
							self._isFirstWeapon = true;
						}
						if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num2)){
							self._isFirstWeapon = false;
						}
						animation.update(dt);
					}
					const ::gc::Sprite & Hero::getCurrentSprite() const{
						return animation.getCurrentSprite();
					}
					::gc::Vec2 Hero::getPosition() const noexcept {
						return self.pos;
					}
					::gc::Vec2 Hero::getSize() const noexcept{
						return self.getCurrentSprite().getSize();
					}
					::gc::Vec2 Hero::getCenter() const noexcept{
						return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
					}
					void Hero::shoot(gc::Vec2 const & dir){if (_isFirstWeapon){
						layer.getObject<Bullet>().start(self.getCenter() + (_lookvec * 50), dir);
						layer.getObject<Bullet>().speed = 100.0f;
						layer.getObject<Bullet>().lifeTime = 100.0f;
						layer.getObject<Bullet>().hitCount = 3;
					}
					else{
						layer.getObject<Bullet>().start(self.getCenter(), dir.getRotated(sh::degree(gc::Random<float>::get(-50, 50))));
						layer.getObject<Bullet>().speed = 250.0f;
						layer.getObject<Bullet>().lifeTime = 100.0f;
						layer.getObject<Bullet>().hitCount = 1;
					}
				}
				void Hero::tryMove(gc::Vec2 const & dir){auto newPos = self.getCenter() + dir;
					auto selfHalfSize = self.getSize() / 2;
					if (newPos.x - selfHalfSize.x < 0 ||
					newPos.x + selfHalfSize.x > 800 ||
					newPos.y - selfHalfSize.y < 0 ||
					newPos.y + selfHalfSize.y > 700
					) return;
					self.moveOn(dir);
				}
				void Hero::dealDamage(u16 dmg){_hp -= dmg;
				}
				void Hero::die(){self.isActive = false;
					self.isVisible = false;
					self._isAlive = false;
				}
				bool Hero::isAlive(){return self._isAlive;
				}
