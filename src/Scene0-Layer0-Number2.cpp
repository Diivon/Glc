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
Number2::Number2(Scene0 & sc, Layer0 & lr):
self(*this), pos(50, 100), scene(sc), layer(lr)
, collider(::gc::Vec2(50,  100),  ::gc::Vec2(50,  50))
, animation()
{
	animation.emplaceFrame("resources\\n\\1.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\2.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\3.jpg", 500.00f);
	animation.emplaceFrame("resources\\n\\4.jpg", 500.00f);
}
Number2::~Number2(){
}
void Number2::onStart(){
	layer.getObject<Number1>().onMoveEvent.sign(*this, &this_t::kek);
	_isRight = true;
	_count = 0;
	animation.start();
}
void Number2::onUpdate(const float & dt){
	if (_count == 2)
	layer.isDone = true;
	animation.update(dt);
}
const ::gc::Sprite Number2::getCurrentSprite() const{
	return animation.getCurrentSprite();
}
::gc::Sprite Number2::getCurrentSprite(){
	return animation.getCurrentSprite();
}
void Number2::kek(Number1 & a){if(a.pos.x > pos.x)
	{
		if (!_isRight)
		{
			_isRight = true;
			++_count;
		}
	}
	else
	if (_isRight)
	{
		_isRight = false;
		++_count;
	}
}
