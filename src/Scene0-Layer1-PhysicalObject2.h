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
class Scene0;
class Layer1;
class PhysicalObject2 : public ::gc::TypeAliases<PhysicalObject2>{
	friend class Layer1;
	typedef PhysicalObject2 this_t;
	PhysicalObject2 & self;
	Scene0 & scene;
	Layer1 & layer;
	public:
	private:
	public:
	::gc::Vec2 pos;
	PhysicalObject2(Scene0 &, Layer1 &);
	~PhysicalObject2();
	void onStart();
	void onUpdate(const float & dt);
	public:
	private:
	private:
	PhysicalObject2(c_lref_t) = delete;
	PhysicalObject2(rref_t) = delete;
	void operator = (c_lref_t) = delete;
	void operator = (rref_t) = delete;
};
