#include "Scene0.h"
EnemyLayer::EnemyLayer(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject2(scene, *this), ObjRenderableObject3(scene, *this), ObjRenderableObject4(scene, *this), ObjRenderableObject5(scene, *this), ObjRenderableObject6(scene, *this), ObjRenderableObject7(scene, *this), ObjRenderableObject8(scene, *this), ObjRenderableObject9(scene, *this), ObjRenderableObject10(scene, *this), ObjRenderableObject11(scene, *this)
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
}
void EnemyLayer::onUpdate(const float & dt){
	ObjRenderableObject2.onUpdate(dt);
	ObjRenderableObject3.onUpdate(dt);
	ObjRenderableObject4.onUpdate(dt);
	ObjRenderableObject5.onUpdate(dt);
	ObjRenderableObject6.onUpdate(dt);
	ObjRenderableObject7.onUpdate(dt);
	ObjRenderableObject8.onUpdate(dt);
	ObjRenderableObject9.onUpdate(dt);
	ObjRenderableObject10.onUpdate(dt);
	ObjRenderableObject11.onUpdate(dt);
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
self(*this), pos(-353, -163), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject2::~RenderableObject2(){
}
void RenderableObject2::onStart(){
}
void RenderableObject2::onUpdate(const float & dt){
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
self(*this), pos(373, 272), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject3::~RenderableObject3(){
}
void RenderableObject3::onStart(){
}
void RenderableObject3::onUpdate(const float & dt){
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
self(*this), pos(-48, 220), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
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
self(*this), pos(-103, 145), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject5::~RenderableObject5(){
}
void RenderableObject5::onStart(){
}
void RenderableObject5::onUpdate(const float & dt){
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
self(*this), pos(47, -262), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
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
self(*this), pos(-106, -151), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject7::~RenderableObject7(){
}
void RenderableObject7::onStart(){
}
void RenderableObject7::onUpdate(const float & dt){
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
self(*this), pos(-66, -158), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject8::~RenderableObject8(){
}
void RenderableObject8::onStart(){
}
void RenderableObject8::onUpdate(const float & dt){
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
self(*this), pos(-22, 21), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject9::~RenderableObject9(){
}
void RenderableObject9::onStart(){
}
void RenderableObject9::onUpdate(const float & dt){
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
self(*this), pos(224, -147), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject10::~RenderableObject10(){
}
void RenderableObject10::onStart(){
}
void RenderableObject10::onUpdate(const float & dt){
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
self(*this), pos(-372, 115), scene(sc), layer(lr)
, collider(pos,  ::gc::Vec2(50,  50))
, sprite("resources\\n\\1.jpg")
{
}
RenderableObject11::~RenderableObject11(){
}
void RenderableObject11::onStart(){
}
void RenderableObject11::onUpdate(const float & dt){
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
#include "Scene0.h"
Layer0::Layer0(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
Layer0::~Layer0(){
}
void Layer0::onStart(){
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void Layer0::onUpdate(const float & dt){
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void Layer0::foreach(F && f){
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
Hero::Hero(Scene0 & sc, Layer0 & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _lookvec(0,  -1), sprite("resources\\soldier\\Soldier1.png")
{
}
Hero::~Hero(){
}
void Hero::onStart(){
}
void Hero::onUpdate(const float & dt){
	if (gc::Mouse::isButtonPressed(gc::Mouse::Button::Left)){
		self.shoot(_lookvec);
	}
	_lookvec = (gc::Mouse::getWorldPosition() - self.getCenter()).normalize();
	auto deg = gc::toDegree(acos(-_lookvec.y));
	if (_lookvec.x < 0)	deg.value *= -1;
	sprite.setRotation(deg);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::W))
	self.moveOn(_lookvec * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::S))
	self.moveOn(_lookvec * -_speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::D))
	self.moveOn(_lookvec.getRotatedDeg(90) * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::A))
	self.moveOn(_lookvec.getRotatedDeg(-90) * _speed);
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num1)){
		self._isFirstWeapon = true;
		gc::debug.log("first weapon choosed");
	}
	if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::Num2)){
		self._isFirstWeapon = false;
		gc::debug.log("second weapon choosed");
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
	layer.getObject<Bullet>().speed = 50.0f;
	layer.getObject<Bullet>().lifeTime = 1000.0f;
}
else{
	layer.getObject<Bullet>().start(self.getCenter(), dir.getRotatedDeg(gc::Random<float>::get(-50, 50)));
	layer.getObject<Bullet>().speed = 250.0f;
	layer.getObject<Bullet>().lifeTime = 100.0f;
}
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
Bullet::Bullet(Scene0 & sc, Layer0 & lr):
self(*this), pos(0, 0), scene(sc), layer(lr)
, _ttl(0.0f),  _isActive(false),  speed(5.0f),  lifeTime(0.0f), collider(pos,  5.00f)
, sprite("resources\\bullet.jpg")
{
}
Bullet::~Bullet(){
}
void Bullet::onStart(){
	self.isVisible = false;
}
void Bullet::onUpdate(const float & dt){
	if (_isActive){
		self.moveOn(_dir * speed);
		_ttl += dt;
	}
	if (_ttl > lifeTime){
		_isActive = false;
		_ttl = 0.0f;
	}
	scene.getLayer<EnemyLayer>().foreach([this](auto & i){
		if (i.collider.isCollide(self.collider))
		i.isVisible = false;
	});
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
void Bullet::start(gc::Vec2 const & pos, gc::Vec2 const & dir){self.isVisible = true;
	if(_isActive) return;
	self.moveTo(pos);
	_isActive = true;
	_dir = dir;
	gc::debug.log("Shoot!");
}
