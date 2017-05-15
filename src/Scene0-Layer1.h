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
#include "Scene0-Layer1-PhysicalObject2.h"
class Scene0;
class Layer1 : public ::gc::TypeAliases<Layer1>{
	Scene0 & scene;
	public:
	;PhysicalObject2 ObjPhysicalObject2;
	private:
	;
	Layer1 & self;
	public:
	Layer1(Scene0 &);
	~Layer1();
	void onStart();
	void onUpdate(const float & dt);
	public:
	private:
	template<class F>
	void foreach(F &&);
	template<class T>
	T & getObject();
	template<class T>
	const T & getObject() const;
	public:
	template<>
	PhysicalObject2 & getObject(){
		return ObjPhysicalObject2;
	}
	template<>
	const PhysicalObject2 & getObject() const{
		return ObjPhysicalObject2;
	}
	private:
	Layer1(c_lref_t) = delete;
	Layer1(rref_t) = delete;
	void operator = (c_lref_t) = delete;
	void operator = (rref_t) = delete;
};
template<>
inline void ::gc::Renderer::renderLayer(const Layer1 & l){
}
