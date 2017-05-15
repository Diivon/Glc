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
#include "Scene0-Layer0-Number1.h"
#include "Scene0-Layer0-Number2.h"
class Scene0;
class Layer0 : public ::gc::TypeAliases<Layer0>{
	Scene0 & scene;
	public:
	bool isDone;Number1 ObjRenderableObject0;
	Number2 ObjRenderableObject1;
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
	template<class F>
	void foreach(F &&);
	template<class T>
	T & getObject();
	template<class T>
	const T & getObject() const;
	public:
	template<>
	Number1 & getObject(){
		return ObjRenderableObject0;
	}
	template<>
	const Number1 & getObject() const{
		return ObjRenderableObject0;
	}
	template<>
	Number2 & getObject(){
		return ObjRenderableObject1;
	}
	template<>
	const Number2 & getObject() const{
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
	this->render(l.getObject<Number1>().getCurrentSprite(), l.getObject<Number1>().pos);
	this->render(l.getObject<Number2>().getCurrentSprite(), l.getObject<Number2>().pos);
}
