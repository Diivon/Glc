#include "Scene0.h"
EnemyLayer::EnemyLayer(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject2(scene, *this), ObjRenderableObject3(scene, *this), ObjRenderableObject4(scene, *this), ObjRenderableObject5(scene, *this), ObjRenderableObject6(scene, *this), ObjRenderableObject7(scene, *this), ObjRenderableObject8(scene, *this), ObjRenderableObject9(scene, *this), ObjRenderableObject10(scene, *this), ObjRenderableObject11(scene, *this), ObjRenderableObject12(scene, *this), ObjRenderableObject13(scene, *this), ObjRenderableObject14(scene, *this), ObjRenderableObject15(scene, *this), ObjRenderableObject16(scene, *this), ObjRenderableObject17(scene, *this), ObjRenderableObject18(scene, *this), ObjRenderableObject19(scene, *this), ObjRenderableObject20(scene, *this), ObjRenderableObject21(scene, *this), ObjRenderableObject22(scene, *this), ObjRenderableObject23(scene, *this), ObjRenderableObject24(scene, *this), ObjRenderableObject25(scene, *this), ObjRenderableObject26(scene, *this), ObjRenderableObject27(scene, *this), ObjRenderableObject28(scene, *this), ObjRenderableObject29(scene, *this), ObjRenderableObject30(scene, *this), ObjRenderableObject31(scene, *this), ObjRenderableObject32(scene, *this), ObjRenderableObject33(scene, *this), ObjRenderableObject34(scene, *this), ObjRenderableObject35(scene, *this), ObjRenderableObject36(scene, *this), ObjRenderableObject37(scene, *this), ObjRenderableObject38(scene, *this), ObjRenderableObject39(scene, *this), ObjRenderableObject40(scene, *this), ObjRenderableObject41(scene, *this), ObjRenderableObject42(scene, *this), ObjRenderableObject43(scene, *this), ObjRenderableObject44(scene, *this), ObjRenderableObject45(scene, *this), ObjRenderableObject46(scene, *this), ObjRenderableObject47(scene, *this), ObjRenderableObject48(scene, *this), ObjRenderableObject49(scene, *this), ObjRenderableObject50(scene, *this), ObjRenderableObject51(scene, *this)
{
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
RenderableObject2::RenderableObject2(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(738, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject2::~RenderableObject2(){
}
void RenderableObject2::onStart(){
	_hp = 100;
}
void RenderableObject2::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
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
void RenderableObject2::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject2::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject2::getTag(){return _tag;
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
RenderableObject3::RenderableObject3(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(735, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject3::~RenderableObject3(){
}
void RenderableObject3::onStart(){
	_hp = 100;
}
void RenderableObject3::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject3::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject3::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject3::getTag(){return _tag;
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
RenderableObject4::RenderableObject4(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(23, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject4::~RenderableObject4(){
}
void RenderableObject4::onStart(){
	_hp = 100;
}
void RenderableObject4::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
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
void RenderableObject4::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject4::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject4::getTag(){return _tag;
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
RenderableObject5::RenderableObject5(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(174, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject5::~RenderableObject5(){
}
void RenderableObject5::onStart(){
	_hp = 100;
}
void RenderableObject5::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject5::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject5::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject5::getTag(){return _tag;
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
RenderableObject6::RenderableObject6(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(486, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject6::~RenderableObject6(){
}
void RenderableObject6::onStart(){
	_hp = 100;
}
void RenderableObject6::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
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
void RenderableObject6::dealDamage(u16 dmg){_hp -= dmg;
	if (_hp <= 0)
	die();
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject6::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject6::getTag(){return _tag;
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
RenderableObject7::RenderableObject7(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(599, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject7::~RenderableObject7(){
}
void RenderableObject7::onStart(){
	_hp = 100;
}
void RenderableObject7::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject7::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject7::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject7::getTag(){return _tag;
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
RenderableObject8::RenderableObject8(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(524, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject8::~RenderableObject8(){
}
void RenderableObject8::onStart(){
	_hp = 100;
}
void RenderableObject8::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject8::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject8::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject8::getTag(){return _tag;
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
RenderableObject9::RenderableObject9(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(589, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject9::~RenderableObject9(){
}
void RenderableObject9::onStart(){
	_hp = 100;
}
void RenderableObject9::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject9::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject9::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject9::getTag(){return _tag;
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
RenderableObject10::RenderableObject10(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(553, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject10::~RenderableObject10(){
}
void RenderableObject10::onStart(){
	_hp = 100;
}
void RenderableObject10::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject10::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject10::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject10::getTag(){return _tag;
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
RenderableObject11::RenderableObject11(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(671, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject11::~RenderableObject11(){
}
void RenderableObject11::onStart(){
	_hp = 100;
}
void RenderableObject11::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject11::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject11::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject11::getTag(){return _tag;
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
RenderableObject12::RenderableObject12(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(786, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject12::~RenderableObject12(){
}
void RenderableObject12::onStart(){
	_hp = 100;
}
void RenderableObject12::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject12::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject12::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject12::getTag(){return _tag;
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
RenderableObject13::RenderableObject13(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(149, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject13::~RenderableObject13(){
}
void RenderableObject13::onStart(){
	_hp = 100;
}
void RenderableObject13::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject13::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject13::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject13::getTag(){return _tag;
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
RenderableObject14::RenderableObject14(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(509, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject14::~RenderableObject14(){
}
void RenderableObject14::onStart(){
	_hp = 100;
}
void RenderableObject14::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject14::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject14::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject14::getTag(){return _tag;
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
RenderableObject15::RenderableObject15(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(606, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject15::~RenderableObject15(){
}
void RenderableObject15::onStart(){
	_hp = 100;
}
void RenderableObject15::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject15::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject15::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject15::getTag(){return _tag;
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
RenderableObject16::RenderableObject16(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(766, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject16::~RenderableObject16(){
}
void RenderableObject16::onStart(){
	_hp = 100;
}
void RenderableObject16::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject16::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject16::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject16::getTag(){return _tag;
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
RenderableObject17::RenderableObject17(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(712, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject17::~RenderableObject17(){
}
void RenderableObject17::onStart(){
	_hp = 100;
}
void RenderableObject17::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject17::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject17::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject17::getTag(){return _tag;
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
RenderableObject18::RenderableObject18(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(682, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject18::~RenderableObject18(){
}
void RenderableObject18::onStart(){
	_hp = 100;
}
void RenderableObject18::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject18::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject18::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject18::getTag(){return _tag;
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
RenderableObject19::RenderableObject19(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(773, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject19::~RenderableObject19(){
}
void RenderableObject19::onStart(){
	_hp = 100;
}
void RenderableObject19::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject19::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject19::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject19::getTag(){return _tag;
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
RenderableObject20::RenderableObject20(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(640, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject20::~RenderableObject20(){
}
void RenderableObject20::onStart(){
	_hp = 100;
}
void RenderableObject20::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject20::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject20::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject20::getTag(){return _tag;
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
RenderableObject21::RenderableObject21(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(748, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject21::~RenderableObject21(){
}
void RenderableObject21::onStart(){
	_hp = 100;
}
void RenderableObject21::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject21::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject21::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject21::getTag(){return _tag;
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
RenderableObject22::RenderableObject22(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(473, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject22::~RenderableObject22(){
}
void RenderableObject22::onStart(){
	_hp = 100;
}
void RenderableObject22::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject22::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject22::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject22::getTag(){return _tag;
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
RenderableObject23::RenderableObject23(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(490, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject23::~RenderableObject23(){
}
void RenderableObject23::onStart(){
	_hp = 100;
}
void RenderableObject23::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject23::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject23::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject23::getTag(){return _tag;
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
RenderableObject24::RenderableObject24(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(137, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject24::~RenderableObject24(){
}
void RenderableObject24::onStart(){
	_hp = 100;
}
void RenderableObject24::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject24::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject24::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject24::getTag(){return _tag;
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
RenderableObject25::RenderableObject25(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(495, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject25::~RenderableObject25(){
}
void RenderableObject25::onStart(){
	_hp = 100;
}
void RenderableObject25::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject25::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject25::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject25::getTag(){return _tag;
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
RenderableObject26::RenderableObject26(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(571, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject26::~RenderableObject26(){
}
void RenderableObject26::onStart(){
	_hp = 100;
}
void RenderableObject26::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject26::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject26::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject26::getTag(){return _tag;
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
RenderableObject27::RenderableObject27(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(735, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject27::~RenderableObject27(){
}
void RenderableObject27::onStart(){
	_hp = 100;
}
void RenderableObject27::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject27::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject27::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject27::getTag(){return _tag;
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
RenderableObject28::RenderableObject28(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(643, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject28::~RenderableObject28(){
}
void RenderableObject28::onStart(){
	_hp = 100;
}
void RenderableObject28::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject28::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject28::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject28::getTag(){return _tag;
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
RenderableObject29::RenderableObject29(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(137, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject29::~RenderableObject29(){
}
void RenderableObject29::onStart(){
	_hp = 100;
}
void RenderableObject29::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject29::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject29::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject29::getTag(){return _tag;
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
RenderableObject30::RenderableObject30(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(350, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject30::~RenderableObject30(){
}
void RenderableObject30::onStart(){
	_hp = 100;
}
void RenderableObject30::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject30::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject30::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject30::getTag(){return _tag;
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
RenderableObject31::RenderableObject31(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(722, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject31::~RenderableObject31(){
}
void RenderableObject31::onStart(){
	_hp = 100;
}
void RenderableObject31::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject31::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject31::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject31::getTag(){return _tag;
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
RenderableObject32::RenderableObject32(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(552, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject32::~RenderableObject32(){
}
void RenderableObject32::onStart(){
	_hp = 100;
}
void RenderableObject32::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject32::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject32::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject32::getTag(){return _tag;
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
RenderableObject33::RenderableObject33(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(555, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject33::~RenderableObject33(){
}
void RenderableObject33::onStart(){
	_hp = 100;
}
void RenderableObject33::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject33::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject33::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject33::getTag(){return _tag;
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
RenderableObject34::RenderableObject34(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(426, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject34::~RenderableObject34(){
}
void RenderableObject34::onStart(){
	_hp = 100;
}
void RenderableObject34::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject34::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject34::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject34::getTag(){return _tag;
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
RenderableObject35::RenderableObject35(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(726, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject35::~RenderableObject35(){
}
void RenderableObject35::onStart(){
	_hp = 100;
}
void RenderableObject35::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject35::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject35::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject35::getTag(){return _tag;
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
RenderableObject37::RenderableObject37(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(674, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject37::~RenderableObject37(){
}
void RenderableObject37::onStart(){
	_hp = 100;
}
void RenderableObject37::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject37::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject37::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject37::getTag(){return _tag;
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
RenderableObject38::RenderableObject38(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(329, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject38::~RenderableObject38(){
}
void RenderableObject38::onStart(){
	_hp = 100;
}
void RenderableObject38::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject38::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject38::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject38::getTag(){return _tag;
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
RenderableObject39::RenderableObject39(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(71, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject39::~RenderableObject39(){
}
void RenderableObject39::onStart(){
	_hp = 100;
}
void RenderableObject39::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject39::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject39::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject39::getTag(){return _tag;
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
RenderableObject40::RenderableObject40(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(507, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject40::~RenderableObject40(){
}
void RenderableObject40::onStart(){
	_hp = 100;
}
void RenderableObject40::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject40::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject40::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject40::getTag(){return _tag;
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
RenderableObject41::RenderableObject41(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(340, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject41::~RenderableObject41(){
}
void RenderableObject41::onStart(){
	_hp = 100;
}
void RenderableObject41::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject41::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject41::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject41::getTag(){return _tag;
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
RenderableObject43::RenderableObject43(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(472, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject43::~RenderableObject43(){
}
void RenderableObject43::onStart(){
	_hp = 100;
}
void RenderableObject43::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject43::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject43::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject43::getTag(){return _tag;
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
RenderableObject44::RenderableObject44(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(348, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject44::~RenderableObject44(){
}
void RenderableObject44::onStart(){
	_hp = 100;
}
void RenderableObject44::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject44::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject44::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject44::getTag(){return _tag;
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
RenderableObject45::RenderableObject45(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(135, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject45::~RenderableObject45(){
}
void RenderableObject45::onStart(){
	_hp = 100;
}
void RenderableObject45::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject45::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject45::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject45::getTag(){return _tag;
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
RenderableObject46::RenderableObject46(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(153, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject46::~RenderableObject46(){
}
void RenderableObject46::onStart(){
	_hp = 100;
}
void RenderableObject46::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject46::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject46::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject46::getTag(){return _tag;
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
RenderableObject47::RenderableObject47(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(5, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject47::~RenderableObject47(){
}
void RenderableObject47::onStart(){
	_hp = 100;
}
void RenderableObject47::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject47::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject47::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject47::getTag(){return _tag;
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
RenderableObject48::RenderableObject48(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(131, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject48::~RenderableObject48(){
}
void RenderableObject48::onStart(){
	_hp = 100;
}
void RenderableObject48::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject48::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject48::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject48::getTag(){return _tag;
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
RenderableObject49::RenderableObject49(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(560, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject49::~RenderableObject49(){
}
void RenderableObject49::onStart(){
	_hp = 100;
}
void RenderableObject49::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject49::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject49::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject49::getTag(){return _tag;
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
RenderableObject51::RenderableObject51(Scene0 & sc, EnemyLayer & lr):
self(*this), pos(317, 600), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(54,  94))
, _tag(gc::TypeName<this_t>::get()), sprite("resources\\enemy.png")
{
}
RenderableObject51::~RenderableObject51(){
}
void RenderableObject51::onStart(){
	_hp = 100;
}
void RenderableObject51::onUpdate(const float & dt){
	auto dir = scene.getLayer<ObjectsLayer>().getObject<Hero>().getCenter() - self.getCenter();
	self.moveOn(dir.getNormalized() * 3.0f);
	if (dir.getLength() < 25.0f)
	scene.getLayer<ObjectsLayer>().getObject<Hero>().dealDamage(5);
}
const ::gc::Sprite & RenderableObject51::getCurrentSprite() const{
	return sprite;
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
	auto effect = sf::CircleShape(50);
	effect.setFillColor(gc::Color::Red);
	effect.setPosition(self.getCenter() - gc::Vec2{25, 25});
		scene.getRenderer().render(effect);
	}
	void RenderableObject51::die(){gc::Vec2 newPos;
		newPos.x = gc::Random<float>::get(0, 800);
		newPos.y = 600;
		self.moveTo(newPos);
		_hp = 100;
	}
	std::string const & RenderableObject51::getTag(){return _tag;
	}
#include "Scene0.h"
ObjectsLayer::ObjectsLayer(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
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
Hero::Hero(Scene0 & sc, ObjectsLayer & lr):
self(*this), pos(400, 300), scene(sc), layer(lr)
, _lookvec(0,  -1),  _hp(100), _tag(gc::TypeName<this_t>::get()), sprite("resources\\soldier\\Soldier1.png")
{
}
Hero::~Hero(){
}
void Hero::onStart(){
	scene.getRenderer().getCamera().followSpeed = 0.2;
	scene.getRenderer().getCamera().moveTo({400, 300});
	}
	void Hero::onUpdate(const float & dt){
		if (self._hp <= 0){
			self.die();
			return;
		}
		if (gc::Mouse::isButtonPressed(gc::Mouse::Button::Left))
		self.shoot(_lookvec);
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
					}
					const ::gc::Sprite & Hero::getCurrentSprite() const{
						return sprite;
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
						layer.getObject<Bullet>().start(self.getCenter(), dir);
						layer.getObject<Bullet>().speed = 250.0f;
						layer.getObject<Bullet>().lifeTime = 100.0f;
					}
					else{
						layer.getObject<Bullet>().start(self.getCenter(), dir.getRotated(sh::degree(gc::Random<float>::get(-50, 50))));
						layer.getObject<Bullet>().speed = 250.0f;
						layer.getObject<Bullet>().lifeTime = 100.0f;
					}
				}
				void Hero::tryMove(gc::Vec2 const & dir){auto newPos = self.getCenter() + dir;
					auto selfHalfSize = self.getSize() / 2;
					if (newPos.x - selfHalfSize.x < 0 ||
					newPos.x + selfHalfSize.x > scene.getRenderer().getCamera().getSize().x ||
					newPos.y - selfHalfSize.y < 0 ||
					newPos.y + selfHalfSize.y > scene.getRenderer().getCamera().getSize().y
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
				std::string const & Hero::getTag(){return _tag;
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
Bullet::Bullet(Scene0 & sc, ObjectsLayer & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _ttl(0.0f),  _alreadyFired(false),  speed(5.0f),  lifeTime(0.0f), _tag(gc::TypeName<this_t>::get()), collider(pos,  5.00f)
, sprite("resources\\bullet.jpg")
{
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
	scene.getLayer<EnemyLayer>().foreach([this](auto & i){
		if (_hitCount == 0)	return;
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
			--_hitCount;
		}
	});
	if (_hitCount == 0)	self.die();
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
	u8 _hitCount = 20;
}
void Bullet::start(gc::Vec2 const & pos, gc::Vec2 const & dir){if(_alreadyFired) return;
	if (self._isDied)
	wake();
	self.moveTo(pos);
	_alreadyFired = true;
	_dir = dir;
}
std::string const & Bullet::getTag(){return _tag;
}
