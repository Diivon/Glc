#include "Scene0.h"
EnemyLayer::EnemyLayer(Scene0 & sc) try:
scene(sc), self(*this)
, ObjRenderableObject2(scene, *this), ObjRenderableObject3(scene, *this), ObjRenderableObject4(scene, *this), ObjRenderableObject5(scene, *this), ObjRenderableObject6(scene, *this), ObjRenderableObject7(scene, *this), ObjRenderableObject8(scene, *this), ObjRenderableObject9(scene, *this), ObjRenderableObject10(scene, *this), ObjRenderableObject11(scene, *this), ObjRenderableObject12(scene, *this), ObjRenderableObject13(scene, *this), ObjRenderableObject14(scene, *this), ObjRenderableObject15(scene, *this), ObjRenderableObject16(scene, *this), ObjRenderableObject17(scene, *this), ObjRenderableObject18(scene, *this), ObjRenderableObject19(scene, *this), ObjRenderableObject20(scene, *this), ObjRenderableObject21(scene, *this), ObjRenderableObject22(scene, *this), ObjRenderableObject23(scene, *this), ObjRenderableObject24(scene, *this), ObjRenderableObject25(scene, *this), ObjRenderableObject26(scene, *this), ObjRenderableObject27(scene, *this), ObjRenderableObject28(scene, *this), ObjRenderableObject29(scene, *this), ObjRenderableObject30(scene, *this), ObjRenderableObject31(scene, *this), ObjRenderableObject32(scene, *this), ObjRenderableObject33(scene, *this), ObjRenderableObject34(scene, *this), ObjRenderableObject35(scene, *this), ObjRenderableObject36(scene, *this), ObjRenderableObject37(scene, *this), ObjRenderableObject38(scene, *this), ObjRenderableObject39(scene, *this), ObjRenderableObject40(scene, *this), ObjRenderableObject41(scene, *this), ObjRenderableObject42(scene, *this), ObjRenderableObject43(scene, *this), ObjRenderableObject44(scene, *this), ObjRenderableObject45(scene, *this), ObjRenderableObject46(scene, *this), ObjRenderableObject47(scene, *this), ObjRenderableObject48(scene, *this), ObjRenderableObject49(scene, *this), ObjRenderableObject50(scene, *this), ObjRenderableObject51(scene, *this), ObjRenderableObject52(scene, *this), ObjRenderableObject53(scene, *this), ObjRenderableObject54(scene, *this), ObjRenderableObject55(scene, *this), ObjRenderableObject56(scene, *this), ObjRenderableObject57(scene, *this), ObjRenderableObject58(scene, *this), ObjRenderableObject59(scene, *this), ObjRenderableObject60(scene, *this), ObjRenderableObject61(scene, *this), ObjRenderableObject62(scene, *this), ObjRenderableObject63(scene, *this), ObjRenderableObject64(scene, *this), ObjRenderableObject65(scene, *this), ObjRenderableObject66(scene, *this), ObjRenderableObject67(scene, *this), ObjRenderableObject68(scene, *this), ObjRenderableObject69(scene, *this), ObjRenderableObject70(scene, *this), ObjRenderableObject71(scene, *this)
{
}
catch(std::exception & e){
	std::cout << "EnemyLayer throws: " << e.what() << std::endl;
	throw;
}
EnemyLayer::~EnemyLayer(){
}
void EnemyLayer::onStart(){
	ObjRenderableObject2.onStart();
	ObjRenderableObject3.onStart();
	ObjRenderableObject4.onStart();
	ObjRenderableObject5.onStart();
	ObjRenderableObject6.onStart();
	ObjRenderableObject7.onStart();
	ObjRenderableObject8.onStart();
	ObjRenderableObject9.onStart();
	ObjRenderableObject10.onStart();
	ObjRenderableObject11.onStart();
	ObjRenderableObject12.onStart();
	ObjRenderableObject13.onStart();
	ObjRenderableObject14.onStart();
	ObjRenderableObject15.onStart();
	ObjRenderableObject16.onStart();
	ObjRenderableObject17.onStart();
	ObjRenderableObject18.onStart();
	ObjRenderableObject19.onStart();
	ObjRenderableObject20.onStart();
	ObjRenderableObject21.onStart();
	ObjRenderableObject22.onStart();
	ObjRenderableObject23.onStart();
	ObjRenderableObject24.onStart();
	ObjRenderableObject25.onStart();
	ObjRenderableObject26.onStart();
	ObjRenderableObject27.onStart();
	ObjRenderableObject28.onStart();
	ObjRenderableObject29.onStart();
	ObjRenderableObject30.onStart();
	ObjRenderableObject31.onStart();
	ObjRenderableObject32.onStart();
	ObjRenderableObject33.onStart();
	ObjRenderableObject34.onStart();
	ObjRenderableObject35.onStart();
	ObjRenderableObject36.onStart();
	ObjRenderableObject37.onStart();
	ObjRenderableObject38.onStart();
	ObjRenderableObject39.onStart();
	ObjRenderableObject40.onStart();
	ObjRenderableObject41.onStart();
	ObjRenderableObject42.onStart();
	ObjRenderableObject43.onStart();
	ObjRenderableObject44.onStart();
	ObjRenderableObject45.onStart();
	ObjRenderableObject46.onStart();
	ObjRenderableObject47.onStart();
	ObjRenderableObject48.onStart();
	ObjRenderableObject49.onStart();
	ObjRenderableObject50.onStart();
	ObjRenderableObject51.onStart();
	ObjRenderableObject52.onStart();
	ObjRenderableObject53.onStart();
	ObjRenderableObject54.onStart();
	ObjRenderableObject55.onStart();
	ObjRenderableObject56.onStart();
	ObjRenderableObject57.onStart();
	ObjRenderableObject58.onStart();
	ObjRenderableObject59.onStart();
	ObjRenderableObject60.onStart();
	ObjRenderableObject61.onStart();
	ObjRenderableObject62.onStart();
	ObjRenderableObject63.onStart();
	ObjRenderableObject64.onStart();
	ObjRenderableObject65.onStart();
	ObjRenderableObject66.onStart();
	ObjRenderableObject67.onStart();
	ObjRenderableObject68.onStart();
	ObjRenderableObject69.onStart();
	ObjRenderableObject70.onStart();
	ObjRenderableObject71.onStart();
}
void EnemyLayer::onUpdate(const float & dt){
	if(ObjRenderableObject2.isActive) ObjRenderableObject2.onUpdate(dt);
	if(ObjRenderableObject3.isActive) ObjRenderableObject3.onUpdate(dt);
	if(ObjRenderableObject4.isActive) ObjRenderableObject4.onUpdate(dt);
	if(ObjRenderableObject5.isActive) ObjRenderableObject5.onUpdate(dt);
	if(ObjRenderableObject6.isActive) ObjRenderableObject6.onUpdate(dt);
	if(ObjRenderableObject7.isActive) ObjRenderableObject7.onUpdate(dt);
	if(ObjRenderableObject8.isActive) ObjRenderableObject8.onUpdate(dt);
	if(ObjRenderableObject9.isActive) ObjRenderableObject9.onUpdate(dt);
	if(ObjRenderableObject10.isActive) ObjRenderableObject10.onUpdate(dt);
	if(ObjRenderableObject11.isActive) ObjRenderableObject11.onUpdate(dt);
	if(ObjRenderableObject12.isActive) ObjRenderableObject12.onUpdate(dt);
	if(ObjRenderableObject13.isActive) ObjRenderableObject13.onUpdate(dt);
	if(ObjRenderableObject14.isActive) ObjRenderableObject14.onUpdate(dt);
	if(ObjRenderableObject15.isActive) ObjRenderableObject15.onUpdate(dt);
	if(ObjRenderableObject16.isActive) ObjRenderableObject16.onUpdate(dt);
	if(ObjRenderableObject17.isActive) ObjRenderableObject17.onUpdate(dt);
	if(ObjRenderableObject18.isActive) ObjRenderableObject18.onUpdate(dt);
	if(ObjRenderableObject19.isActive) ObjRenderableObject19.onUpdate(dt);
	if(ObjRenderableObject20.isActive) ObjRenderableObject20.onUpdate(dt);
	if(ObjRenderableObject21.isActive) ObjRenderableObject21.onUpdate(dt);
	if(ObjRenderableObject22.isActive) ObjRenderableObject22.onUpdate(dt);
	if(ObjRenderableObject23.isActive) ObjRenderableObject23.onUpdate(dt);
	if(ObjRenderableObject24.isActive) ObjRenderableObject24.onUpdate(dt);
	if(ObjRenderableObject25.isActive) ObjRenderableObject25.onUpdate(dt);
	if(ObjRenderableObject26.isActive) ObjRenderableObject26.onUpdate(dt);
	if(ObjRenderableObject27.isActive) ObjRenderableObject27.onUpdate(dt);
	if(ObjRenderableObject28.isActive) ObjRenderableObject28.onUpdate(dt);
	if(ObjRenderableObject29.isActive) ObjRenderableObject29.onUpdate(dt);
	if(ObjRenderableObject30.isActive) ObjRenderableObject30.onUpdate(dt);
	if(ObjRenderableObject31.isActive) ObjRenderableObject31.onUpdate(dt);
	if(ObjRenderableObject32.isActive) ObjRenderableObject32.onUpdate(dt);
	if(ObjRenderableObject33.isActive) ObjRenderableObject33.onUpdate(dt);
	if(ObjRenderableObject34.isActive) ObjRenderableObject34.onUpdate(dt);
	if(ObjRenderableObject35.isActive) ObjRenderableObject35.onUpdate(dt);
	if(ObjRenderableObject36.isActive) ObjRenderableObject36.onUpdate(dt);
	if(ObjRenderableObject37.isActive) ObjRenderableObject37.onUpdate(dt);
	if(ObjRenderableObject38.isActive) ObjRenderableObject38.onUpdate(dt);
	if(ObjRenderableObject39.isActive) ObjRenderableObject39.onUpdate(dt);
	if(ObjRenderableObject40.isActive) ObjRenderableObject40.onUpdate(dt);
	if(ObjRenderableObject41.isActive) ObjRenderableObject41.onUpdate(dt);
	if(ObjRenderableObject42.isActive) ObjRenderableObject42.onUpdate(dt);
	if(ObjRenderableObject43.isActive) ObjRenderableObject43.onUpdate(dt);
	if(ObjRenderableObject44.isActive) ObjRenderableObject44.onUpdate(dt);
	if(ObjRenderableObject45.isActive) ObjRenderableObject45.onUpdate(dt);
	if(ObjRenderableObject46.isActive) ObjRenderableObject46.onUpdate(dt);
	if(ObjRenderableObject47.isActive) ObjRenderableObject47.onUpdate(dt);
	if(ObjRenderableObject48.isActive) ObjRenderableObject48.onUpdate(dt);
	if(ObjRenderableObject49.isActive) ObjRenderableObject49.onUpdate(dt);
	if(ObjRenderableObject50.isActive) ObjRenderableObject50.onUpdate(dt);
	if(ObjRenderableObject51.isActive) ObjRenderableObject51.onUpdate(dt);
	if(ObjRenderableObject52.isActive) ObjRenderableObject52.onUpdate(dt);
	if(ObjRenderableObject53.isActive) ObjRenderableObject53.onUpdate(dt);
	if(ObjRenderableObject54.isActive) ObjRenderableObject54.onUpdate(dt);
	if(ObjRenderableObject55.isActive) ObjRenderableObject55.onUpdate(dt);
	if(ObjRenderableObject56.isActive) ObjRenderableObject56.onUpdate(dt);
	if(ObjRenderableObject57.isActive) ObjRenderableObject57.onUpdate(dt);
	if(ObjRenderableObject58.isActive) ObjRenderableObject58.onUpdate(dt);
	if(ObjRenderableObject59.isActive) ObjRenderableObject59.onUpdate(dt);
	if(ObjRenderableObject60.isActive) ObjRenderableObject60.onUpdate(dt);
	if(ObjRenderableObject61.isActive) ObjRenderableObject61.onUpdate(dt);
	if(ObjRenderableObject62.isActive) ObjRenderableObject62.onUpdate(dt);
	if(ObjRenderableObject63.isActive) ObjRenderableObject63.onUpdate(dt);
	if(ObjRenderableObject64.isActive) ObjRenderableObject64.onUpdate(dt);
	if(ObjRenderableObject65.isActive) ObjRenderableObject65.onUpdate(dt);
	if(ObjRenderableObject66.isActive) ObjRenderableObject66.onUpdate(dt);
	if(ObjRenderableObject67.isActive) ObjRenderableObject67.onUpdate(dt);
	if(ObjRenderableObject68.isActive) ObjRenderableObject68.onUpdate(dt);
	if(ObjRenderableObject69.isActive) ObjRenderableObject69.onUpdate(dt);
	if(ObjRenderableObject70.isActive) ObjRenderableObject70.onUpdate(dt);
	if(ObjRenderableObject71.isActive) ObjRenderableObject71.onUpdate(dt);
}
template<class F>
void EnemyLayer::foreach(F && f){
	f(this->getObject<RenderableObject2>());
	f(this->getObject<RenderableObject3>());
	f(this->getObject<RenderableObject4>());
	f(this->getObject<RenderableObject5>());
	f(this->getObject<RenderableObject6>());
	f(this->getObject<RenderableObject7>());
	f(this->getObject<RenderableObject8>());
	f(this->getObject<RenderableObject9>());
	f(this->getObject<RenderableObject10>());
	f(this->getObject<RenderableObject11>());
	f(this->getObject<RenderableObject12>());
	f(this->getObject<RenderableObject13>());
	f(this->getObject<RenderableObject14>());
	f(this->getObject<RenderableObject15>());
	f(this->getObject<RenderableObject16>());
	f(this->getObject<RenderableObject17>());
	f(this->getObject<RenderableObject18>());
	f(this->getObject<RenderableObject19>());
	f(this->getObject<RenderableObject20>());
	f(this->getObject<RenderableObject21>());
	f(this->getObject<RenderableObject22>());
	f(this->getObject<RenderableObject23>());
	f(this->getObject<RenderableObject24>());
	f(this->getObject<RenderableObject25>());
	f(this->getObject<RenderableObject26>());
	f(this->getObject<RenderableObject27>());
	f(this->getObject<RenderableObject28>());
	f(this->getObject<RenderableObject29>());
	f(this->getObject<RenderableObject30>());
	f(this->getObject<RenderableObject31>());
	f(this->getObject<RenderableObject32>());
	f(this->getObject<RenderableObject33>());
	f(this->getObject<RenderableObject34>());
	f(this->getObject<RenderableObject35>());
	f(this->getObject<RenderableObject36>());
	f(this->getObject<RenderableObject37>());
	f(this->getObject<RenderableObject38>());
	f(this->getObject<RenderableObject39>());
	f(this->getObject<RenderableObject40>());
	f(this->getObject<RenderableObject41>());
	f(this->getObject<RenderableObject42>());
	f(this->getObject<RenderableObject43>());
	f(this->getObject<RenderableObject44>());
	f(this->getObject<RenderableObject45>());
	f(this->getObject<RenderableObject46>());
	f(this->getObject<RenderableObject47>());
	f(this->getObject<RenderableObject48>());
	f(this->getObject<RenderableObject49>());
	f(this->getObject<RenderableObject50>());
	f(this->getObject<RenderableObject51>());
	f(this->getObject<RenderableObject52>());
	f(this->getObject<RenderableObject53>());
	f(this->getObject<RenderableObject54>());
	f(this->getObject<RenderableObject55>());
	f(this->getObject<RenderableObject56>());
	f(this->getObject<RenderableObject57>());
	f(this->getObject<RenderableObject58>());
	f(this->getObject<RenderableObject59>());
	f(this->getObject<RenderableObject60>());
	f(this->getObject<RenderableObject61>());
	f(this->getObject<RenderableObject62>());
	f(this->getObject<RenderableObject63>());
	f(this->getObject<RenderableObject64>());
	f(this->getObject<RenderableObject65>());
	f(this->getObject<RenderableObject66>());
	f(this->getObject<RenderableObject67>());
	f(this->getObject<RenderableObject68>());
	f(this->getObject<RenderableObject69>());
	f(this->getObject<RenderableObject70>());
	f(this->getObject<RenderableObject71>());
}
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
RenderableObject2::RenderableObject2(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(750, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 563.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 552.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject2 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject2::~RenderableObject2(){
}
void RenderableObject2::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject2::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject2::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
void RenderableObject2::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject2::die(){gc::Vec2 newPos;
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
RenderableObject3::RenderableObject3(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(565, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 496.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 468.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject3 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject3::~RenderableObject3(){
}
void RenderableObject3::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject3::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject3::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject3::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject3::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject3::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject3::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject3::die(){gc::Vec2 newPos;
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
RenderableObject4::RenderableObject4(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(433, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 505.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 476.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject4 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject4::~RenderableObject4(){
}
void RenderableObject4::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject4::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject4::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
void RenderableObject4::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject4::die(){gc::Vec2 newPos;
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
self(*this), pos(319, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 442.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 408.00f);
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
RenderableObject6::RenderableObject6(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(394, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 418.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 537.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject6 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject6::~RenderableObject6(){
}
void RenderableObject6::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject6::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject6::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
void RenderableObject6::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject6::die(){gc::Vec2 newPos;
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
RenderableObject7::RenderableObject7(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(713, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 545.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 316.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject7 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject7::~RenderableObject7(){
}
void RenderableObject7::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject7::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject7::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject7::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject7::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject7::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject7::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject7::die(){gc::Vec2 newPos;
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
RenderableObject8::RenderableObject8(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(532, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 401.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 371.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject8 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject8::~RenderableObject8(){
}
void RenderableObject8::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject8::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject8::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject8::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject8::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject8::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject8::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject8::die(){gc::Vec2 newPos;
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
RenderableObject9::RenderableObject9(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(207, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 592.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 585.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject9 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject9::~RenderableObject9(){
}
void RenderableObject9::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject9::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject9::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject9::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject9::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject9::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject9::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject9::die(){gc::Vec2 newPos;
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
RenderableObject10::RenderableObject10(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(70, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 498.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 564.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject10 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject10::~RenderableObject10(){
}
void RenderableObject10::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject10::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject10::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
void RenderableObject10::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject10::die(){gc::Vec2 newPos;
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
RenderableObject11::RenderableObject11(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(485, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 511.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 565.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject11 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject11::~RenderableObject11(){
}
void RenderableObject11::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject11::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject11::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject11::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject11::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject11::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject11::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject11::die(){gc::Vec2 newPos;
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
RenderableObject12::RenderableObject12(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(106, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 315.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 559.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject12 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject12::~RenderableObject12(){
}
void RenderableObject12::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject12::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject12::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject12::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject12::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject12::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject12::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject12::die(){gc::Vec2 newPos;
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
RenderableObject13::RenderableObject13(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(260, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 520.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 441.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject13 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject13::~RenderableObject13(){
}
void RenderableObject13::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject13::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject13::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject13::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject13::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject13::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject13::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject13::die(){gc::Vec2 newPos;
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
RenderableObject14::RenderableObject14(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(266, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 368.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 392.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject14 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject14::~RenderableObject14(){
}
void RenderableObject14::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject14::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject14::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject14::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject14::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject14::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject14::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject14::die(){gc::Vec2 newPos;
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
RenderableObject15::RenderableObject15(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(729, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 549.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 450.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject15 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject15::~RenderableObject15(){
}
void RenderableObject15::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject15::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject15::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject15::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject15::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject15::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject15::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject15::die(){gc::Vec2 newPos;
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
RenderableObject16::RenderableObject16(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(737, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 434.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 413.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject16 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject16::~RenderableObject16(){
}
void RenderableObject16::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject16::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject16::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject16::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject16::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject16::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject16::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject16::die(){gc::Vec2 newPos;
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
RenderableObject17::RenderableObject17(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(734, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 512.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 516.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject17 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject17::~RenderableObject17(){
}
void RenderableObject17::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject17::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject17::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject17::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject17::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject17::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject17::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject17::die(){gc::Vec2 newPos;
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
RenderableObject18::RenderableObject18(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(314, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 533.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 397.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject18 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject18::~RenderableObject18(){
}
void RenderableObject18::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject18::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject18::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject18::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject18::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject18::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject18::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject18::die(){gc::Vec2 newPos;
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
RenderableObject19::RenderableObject19(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(368, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 504.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 450.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject19 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject19::~RenderableObject19(){
}
void RenderableObject19::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject19::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject19::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject19::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject19::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject19::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject19::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject19::die(){gc::Vec2 newPos;
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
RenderableObject20::RenderableObject20(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(694, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 503.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 571.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject20 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject20::~RenderableObject20(){
}
void RenderableObject20::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject20::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject20::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject20::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject20::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject20::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject20::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject20::die(){gc::Vec2 newPos;
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
RenderableObject21::RenderableObject21(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(710, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 485.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 597.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject21 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject21::~RenderableObject21(){
}
void RenderableObject21::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject21::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject21::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject21::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject21::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject21::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject21::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject21::die(){gc::Vec2 newPos;
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
RenderableObject22::RenderableObject22(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(544, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 580.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 594.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject22 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject22::~RenderableObject22(){
}
void RenderableObject22::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject22::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject22::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject22::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject22::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject22::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject22::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject22::die(){gc::Vec2 newPos;
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
RenderableObject23::RenderableObject23(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(562, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 379.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 426.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject23 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject23::~RenderableObject23(){
}
void RenderableObject23::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject23::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject23::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject23::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject23::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject23::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject23::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject23::die(){gc::Vec2 newPos;
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
RenderableObject24::RenderableObject24(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(397, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 350.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 497.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject24 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject24::~RenderableObject24(){
}
void RenderableObject24::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject24::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject24::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject24::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject24::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject24::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject24::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject24::die(){gc::Vec2 newPos;
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
RenderableObject25::RenderableObject25(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(257, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 467.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 477.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject25 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject25::~RenderableObject25(){
}
void RenderableObject25::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject25::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject25::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject25::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject25::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject25::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject25::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject25::die(){gc::Vec2 newPos;
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
RenderableObject26::RenderableObject26(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(598, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 526.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 451.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject26 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject26::~RenderableObject26(){
}
void RenderableObject26::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject26::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject26::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject26::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject26::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject26::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject26::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject26::die(){gc::Vec2 newPos;
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
RenderableObject27::RenderableObject27(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(588, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 400.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 457.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject27 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject27::~RenderableObject27(){
}
void RenderableObject27::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject27::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject27::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject27::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject27::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject27::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject27::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject27::die(){gc::Vec2 newPos;
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
RenderableObject28::RenderableObject28(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(460, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 350.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 586.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject28 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject28::~RenderableObject28(){
}
void RenderableObject28::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject28::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject28::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject28::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject28::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject28::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject28::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject28::die(){gc::Vec2 newPos;
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
RenderableObject29::RenderableObject29(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(126, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 364.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 578.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject29 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject29::~RenderableObject29(){
}
void RenderableObject29::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject29::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject29::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject29::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject29::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject29::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject29::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject29::die(){gc::Vec2 newPos;
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
RenderableObject30::RenderableObject30(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(450, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 501.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 410.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject30 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject30::~RenderableObject30(){
}
void RenderableObject30::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject30::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject30::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject30::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject30::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject30::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject30::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject30::die(){gc::Vec2 newPos;
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
RenderableObject31::RenderableObject31(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(289, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 437.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 317.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject31 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject31::~RenderableObject31(){
}
void RenderableObject31::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject31::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject31::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject31::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject31::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject31::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject31::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject31::die(){gc::Vec2 newPos;
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
RenderableObject32::RenderableObject32(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(453, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 433.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 482.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject32 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject32::~RenderableObject32(){
}
void RenderableObject32::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject32::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject32::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject32::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject32::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject32::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject32::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject32::die(){gc::Vec2 newPos;
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
RenderableObject33::RenderableObject33(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(252, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 369.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 568.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject33 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject33::~RenderableObject33(){
}
void RenderableObject33::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject33::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject33::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject33::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject33::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject33::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject33::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject33::die(){gc::Vec2 newPos;
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
RenderableObject34::RenderableObject34(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(418, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 365.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 354.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject34 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject34::~RenderableObject34(){
}
void RenderableObject34::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject34::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject34::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject34::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject34::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject34::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject34::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject34::die(){gc::Vec2 newPos;
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
RenderableObject35::RenderableObject35(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(763, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 426.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 462.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject35 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject35::~RenderableObject35(){
}
void RenderableObject35::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject35::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject35::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject35::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject35::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject35::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject35::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject35::die(){gc::Vec2 newPos;
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
RenderableObject36::RenderableObject36(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(51, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 321.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 365.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject36 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject36::~RenderableObject36(){
}
void RenderableObject36::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject36::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject36::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject36::die(){gc::Vec2 newPos;
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
RenderableObject37::RenderableObject37(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(586, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 513.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 578.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject37 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject37::~RenderableObject37(){
}
void RenderableObject37::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject37::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject37::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject37::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject37::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject37::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject37::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject37::die(){gc::Vec2 newPos;
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
self(*this), pos(797, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 339.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 402.00f);
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
RenderableObject39::RenderableObject39(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(302, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 394.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 434.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject39 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject39::~RenderableObject39(){
}
void RenderableObject39::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject39::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject39::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject39::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject39::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject39::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject39::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject39::die(){gc::Vec2 newPos;
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
RenderableObject40::RenderableObject40(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(31, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 456.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 516.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject40 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject40::~RenderableObject40(){
}
void RenderableObject40::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject40::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject40::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject40::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject40::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject40::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject40::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject40::die(){gc::Vec2 newPos;
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
RenderableObject41::RenderableObject41(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(42, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 342.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 477.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject41 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject41::~RenderableObject41(){
}
void RenderableObject41::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject41::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject41::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject41::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject41::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject41::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject41::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject41::die(){gc::Vec2 newPos;
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
RenderableObject42::RenderableObject42(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(42, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 340.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 513.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject42 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject42::~RenderableObject42(){
}
void RenderableObject42::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject42::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject42::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject42::die(){gc::Vec2 newPos;
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
RenderableObject43::RenderableObject43(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(480, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 526.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 334.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject43 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject43::~RenderableObject43(){
}
void RenderableObject43::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject43::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject43::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject43::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject43::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject43::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject43::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject43::die(){gc::Vec2 newPos;
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
RenderableObject44::RenderableObject44(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(785, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 429.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 456.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject44 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject44::~RenderableObject44(){
}
void RenderableObject44::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject44::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject44::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject44::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject44::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject44::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject44::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject44::die(){gc::Vec2 newPos;
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
RenderableObject45::RenderableObject45(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(488, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 364.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 335.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject45 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject45::~RenderableObject45(){
}
void RenderableObject45::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject45::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject45::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject45::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject45::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject45::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject45::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject45::die(){gc::Vec2 newPos;
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
RenderableObject46::RenderableObject46(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(274, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 486.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 524.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject46 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject46::~RenderableObject46(){
}
void RenderableObject46::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject46::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject46::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject46::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject46::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject46::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject46::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject46::die(){gc::Vec2 newPos;
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
RenderableObject47::RenderableObject47(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(330, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 327.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 342.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject47 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject47::~RenderableObject47(){
}
void RenderableObject47::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject47::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject47::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject47::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject47::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject47::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject47::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject47::die(){gc::Vec2 newPos;
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
RenderableObject48::RenderableObject48(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(567, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 549.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 588.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject48 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject48::~RenderableObject48(){
}
void RenderableObject48::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject48::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject48::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject48::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject48::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject48::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject48::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject48::die(){gc::Vec2 newPos;
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
RenderableObject49::RenderableObject49(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(352, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 409.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 397.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject49 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject49::~RenderableObject49(){
}
void RenderableObject49::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject49::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject49::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject49::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject49::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject49::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject49::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject49::die(){gc::Vec2 newPos;
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
RenderableObject50::RenderableObject50(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(571, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 356.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 339.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject50 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject50::~RenderableObject50(){
}
void RenderableObject50::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject50::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject50::getCurrentSprite() const{
	return animation.getCurrentSprite();
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
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject50::die(){gc::Vec2 newPos;
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
RenderableObject51::RenderableObject51(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(127, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 382.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 512.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject51 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject51::~RenderableObject51(){
}
void RenderableObject51::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject51::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject51::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject51::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject51::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject51::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject51::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject51::die(){gc::Vec2 newPos;
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
RenderableObject52::RenderableObject52(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(140, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 440.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 323.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject52 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject52::~RenderableObject52(){
}
void RenderableObject52::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject52::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject52::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject52::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject52::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject52::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject52::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject52::die(){gc::Vec2 newPos;
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
RenderableObject53::RenderableObject53(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(471, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 570.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 385.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject53 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject53::~RenderableObject53(){
}
void RenderableObject53::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject53::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject53::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject53::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject53::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject53::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject53::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject53::die(){gc::Vec2 newPos;
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
RenderableObject54::RenderableObject54(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(663, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 439.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 395.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject54 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject54::~RenderableObject54(){
}
void RenderableObject54::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject54::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject54::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject54::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject54::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject54::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject54::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject54::die(){gc::Vec2 newPos;
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
RenderableObject55::RenderableObject55(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(84, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 525.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 383.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject55 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject55::~RenderableObject55(){
}
void RenderableObject55::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject55::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject55::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject55::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject55::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject55::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject55::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject55::die(){gc::Vec2 newPos;
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
RenderableObject56::RenderableObject56(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(325, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 415.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 575.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject56 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject56::~RenderableObject56(){
}
void RenderableObject56::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject56::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject56::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject56::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject56::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject56::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject56::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject56::die(){gc::Vec2 newPos;
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
RenderableObject57::RenderableObject57(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(180, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 310.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 507.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject57 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject57::~RenderableObject57(){
}
void RenderableObject57::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject57::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject57::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject57::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject57::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject57::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject57::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject57::die(){gc::Vec2 newPos;
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
RenderableObject58::RenderableObject58(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(560, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 487.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 428.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject58 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject58::~RenderableObject58(){
}
void RenderableObject58::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject58::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject58::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject58::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject58::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject58::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject58::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject58::die(){gc::Vec2 newPos;
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
RenderableObject59::RenderableObject59(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(462, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 403.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 393.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject59 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject59::~RenderableObject59(){
}
void RenderableObject59::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject59::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject59::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject59::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject59::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject59::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject59::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject59::die(){gc::Vec2 newPos;
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
RenderableObject60::RenderableObject60(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(505, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 483.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 531.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject60 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject60::~RenderableObject60(){
}
void RenderableObject60::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject60::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject60::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject60::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject60::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject60::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject60::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject60::die(){gc::Vec2 newPos;
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
RenderableObject61::RenderableObject61(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(309, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 566.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 469.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject61 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject61::~RenderableObject61(){
}
void RenderableObject61::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject61::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject61::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject61::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject61::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject61::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject61::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject61::die(){gc::Vec2 newPos;
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
RenderableObject62::RenderableObject62(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(785, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 546.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 347.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject62 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject62::~RenderableObject62(){
}
void RenderableObject62::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject62::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject62::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject62::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject62::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject62::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject62::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject62::die(){gc::Vec2 newPos;
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
RenderableObject63::RenderableObject63(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(651, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 430.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 523.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject63 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject63::~RenderableObject63(){
}
void RenderableObject63::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject63::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject63::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject63::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject63::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject63::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject63::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject63::die(){gc::Vec2 newPos;
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
RenderableObject64::RenderableObject64(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(30, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 526.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 515.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject64 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject64::~RenderableObject64(){
}
void RenderableObject64::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject64::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject64::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject64::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject64::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject64::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject64::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject64::die(){gc::Vec2 newPos;
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
RenderableObject65::RenderableObject65(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(369, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 475.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 488.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject65 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject65::~RenderableObject65(){
}
void RenderableObject65::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject65::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject65::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject65::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject65::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject65::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject65::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject65::die(){gc::Vec2 newPos;
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
RenderableObject66::RenderableObject66(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(659, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 481.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 323.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject66 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject66::~RenderableObject66(){
}
void RenderableObject66::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject66::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject66::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject66::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject66::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject66::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject66::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject66::die(){gc::Vec2 newPos;
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
RenderableObject67::RenderableObject67(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(546, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 310.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 593.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject67 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject67::~RenderableObject67(){
}
void RenderableObject67::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject67::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject67::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject67::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject67::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject67::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject67::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject67::die(){gc::Vec2 newPos;
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
RenderableObject68::RenderableObject68(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(324, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 446.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 346.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject68 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject68::~RenderableObject68(){
}
void RenderableObject68::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject68::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject68::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject68::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject68::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject68::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject68::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject68::die(){gc::Vec2 newPos;
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
RenderableObject69::RenderableObject69(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(351, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 437.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 494.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject69 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject69::~RenderableObject69(){
}
void RenderableObject69::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject69::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject69::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject69::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject69::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject69::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject69::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject69::die(){gc::Vec2 newPos;
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
RenderableObject70::RenderableObject70(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(222, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 479.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 337.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject70 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject70::~RenderableObject70(){
}
void RenderableObject70::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject70::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject70::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject70::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject70::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject70::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject70::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject70::die(){gc::Vec2 newPos;
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
RenderableObject71::RenderableObject71(Scene0 & sc, EnemyLayer & lr) try:
self(*this), pos(614, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, animation()
{
	animation.emplaceFrame("resources\\enemy\\enemy1.png", 587.00f);
	animation.emplaceFrame("resources\\enemy\\enemy2.png", 386.00f);
}
catch(std::exception & e){
	std::cout << "RenderableObject71 throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
RenderableObject71::~RenderableObject71(){
}
void RenderableObject71::onStart(){
	_hp = 100;
	animation.start();
}
void RenderableObject71::onUpdate(const float & dt){
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
const ::gc::Sprite & RenderableObject71::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Vec2 RenderableObject71::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 RenderableObject71::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 RenderableObject71::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void RenderableObject71::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(5);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject71::die(){gc::Vec2 newPos;
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
#include "Scene0.h"
ObjectsLayer::ObjectsLayer(Scene0 & sc) try:
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
catch(std::exception & e){
	std::cout << "ObjectsLayer throws: " << e.what() << std::endl;
	throw;
}
ObjectsLayer::~ObjectsLayer(){
}
void ObjectsLayer::onStart(){
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void ObjectsLayer::onUpdate(const float & dt){
	if(ObjRenderableObject0.isActive) ObjRenderableObject0.onUpdate(dt);
	if(ObjRenderableObject1.isActive) ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void ObjectsLayer::foreach(F && f){
	f(this->getObject<Hero>());
	f(this->getObject<Bullet>());
}
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
Bullet::Bullet(Scene0 & sc, ObjectsLayer & lr) try:
self(*this), pos(0, 0), scene(sc), layer(lr)
, _ttl(0.0f),  _alreadyFired(false),  speed(5.0f),  lifeTime(0.0f), collider(pos,  5.00f)
, sprite("resources\\bullet.jpg")
{
}
catch(std::exception & e){
	std::cout << "Bullet throws: " << e.what() << std::endl;
	std::cin.get();
	throw;
}
Bullet::~Bullet(){
}
void Bullet::onStart(){
	isVisible = false;
	self.isVisible = false;
}
void Bullet::onUpdate(const float & dt){
	if (_ttl > lifeTime){
		self.die();
		return;
	}
	_ttl += dt;
	self.moveOn(_dir * speed);
	calculateCollisions();
	scene.getRenderer().render(
	gc::Line()
	.setBegin(self.getCenter())
	.setEnd(self.getCenter() + (_dir * speed))
	.setColor(gc::Color::Yellow)
	.setThickness(5)
	);
}
const ::gc::Sprite & Bullet::getCurrentSprite() const{
	return sprite;
}
::gc::Vec2 Bullet::getPosition() const noexcept {
	return self.pos;
}
::gc::Vec2 Bullet::getSize() const noexcept{
	return self.getCurrentSprite().getSize();
}
::gc::Vec2 Bullet::getCenter() const noexcept{
	return self.getPosition() + (self.getCurrentSprite().getSize() / 2);
}
void Bullet::die(){_alreadyFired = false;
	_ttl = 0.0f;
	_isDied = true;
	isVisible = false;
	isActive = false;
}
void Bullet::wake(){isVisible = true;
	isActive = true;
	_isDied = false;
	_alreadyFired = false;
}
void Bullet::start(gc::Vec2 const & pos, gc::Vec2 const & dir){if(_alreadyFired) return;
	if (self._isDied)
	wake();
	self.moveTo(pos);
	_alreadyFired = true;
	_dir = dir;
	scene.getRenderer().render(
	gc::Line()
	.setBegin(self.getCenter() + (_dir * 10))
	.setEnd(self.getCenter() + (_dir * speed))
	.setColor(gc::Color::Yellow)
	.setThickness(5)
	);
}
void Bullet::calculateCollisions(){scene.getLayer<EnemyLayer>().foreach([this](auto & i){
	if (hitCount == 0)	return;
	bool a = gc::areAtDifferentSides(
	self.getCenter(),
	self.getCenter() + (_dir * speed),
	i.getCollider().getTopLeftCorner(),
	i.getCollider().getLowRightCorner()
	);
	bool b = gc::areAtDifferentSides(
	self.getCenter(),
	self.getCenter() + (_dir * speed),
	i.getCollider().getTopRightCorner(),
	i.getCollider().getLowLeftCorner()
	);
	bool c = a || b;
	if (c && (i.getCenter() - self.getCenter()).getLength() < speed){
		i.dealDamage(40);
		--hitCount;
	}
});
if (hitCount == 0)	self.die();
}
