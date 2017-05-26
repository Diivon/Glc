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
#include "Scene0-ObjectsLayer-Hero.h"
#include "Scene0-ObjectsLayer-Bullet.h"
class Scene0;
class ObjectsLayer : public ::gc::TypeAliases<ObjectsLayer>{
	Scene0 & scene;
	public:
	;Hero ObjRenderableObject0;
	Bullet ObjRenderableObject1;
	private:
	;
	ObjectsLayer & self;
	public:
	ObjectsLayer(Scene0 &);
	~ObjectsLayer();
	void onStart();
	void onUpdate(const float & dt);
	public:
	private:
	public:
	template<class F>
	void foreach(F &&);
	template<class T>
	T & getObject();
	template<class T>
	const T & getObject() const;
	public:
	template<>
	Hero & getObject(){
		return ObjRenderableObject0;
	}
	template<>
	const Hero & getObject() const{
		return ObjRenderableObject0;
	}
	template<>
	Bullet & getObject(){
		return ObjRenderableObject1;
	}
	template<>
	const Bullet & getObject() const{
		return ObjRenderableObject1;
	}
	private:
	ObjectsLayer(c_lref_t) = delete;
	ObjectsLayer(rref_t) = delete;
	void operator = (c_lref_t) = delete;
	void operator = (rref_t) = delete;
};
template<>
inline void ::gc::Renderer::renderLayer(const ObjectsLayer & l){
	if (l.getObject<Hero>().isVisible) this->render(l.getObject<Hero>().getCurrentSprite(), l.getObject<Hero>().pos);
	if (l.getObject<Bullet>().isVisible) this->render(l.getObject<Bullet>().getCurrentSprite(), l.getObject<Bullet>().pos);
}
