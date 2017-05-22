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
#include "Scene0-Layer0-Hero.h"
#include "Scene0-Layer0-Bullet.h"
class Scene0;
class Layer0 : public ::gc::TypeAliases<Layer0>{
	Scene0 & scene;
	public:
	;Hero ObjRenderableObject0;
	Bullet ObjRenderableObject1;
	private:
	;
	Layer0 & self;
	public:
	Layer0(Scene0 &);
	~Layer0();
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
	Layer0(c_lref_t) = delete;
	Layer0(rref_t) = delete;
	void operator = (c_lref_t) = delete;
	void operator = (rref_t) = delete;
};
template<>
inline void ::gc::Renderer::renderLayer(const Layer0 & l){
	this->render(l.getObject<Hero>().getCurrentSprite(), l.getObject<Hero>().pos);
	this->render(l.getObject<Bullet>().getCurrentSprite(), l.getObject<Bullet>().pos);
}
