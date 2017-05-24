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
#include "Scene0-EnemyLayer-RenderableObject2.h"
#include "Scene0-EnemyLayer-RenderableObject3.h"
#include "Scene0-EnemyLayer-RenderableObject4.h"
#include "Scene0-EnemyLayer-RenderableObject5.h"
#include "Scene0-EnemyLayer-RenderableObject6.h"
#include "Scene0-EnemyLayer-RenderableObject7.h"
#include "Scene0-EnemyLayer-RenderableObject8.h"
#include "Scene0-EnemyLayer-RenderableObject9.h"
#include "Scene0-EnemyLayer-RenderableObject10.h"
#include "Scene0-EnemyLayer-RenderableObject11.h"
class Scene0;
class EnemyLayer : public ::gc::TypeAliases<EnemyLayer>{
	Scene0 & scene;
	public:
	;RenderableObject2 ObjRenderableObject2;
	RenderableObject3 ObjRenderableObject3;
	RenderableObject4 ObjRenderableObject4;
	RenderableObject5 ObjRenderableObject5;
	RenderableObject6 ObjRenderableObject6;
	RenderableObject7 ObjRenderableObject7;
	RenderableObject8 ObjRenderableObject8;
	RenderableObject9 ObjRenderableObject9;
	RenderableObject10 ObjRenderableObject10;
	RenderableObject11 ObjRenderableObject11;
	private:
	;
	EnemyLayer & self;
	public:
	EnemyLayer(Scene0 &);
	~EnemyLayer();
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
	RenderableObject2 & getObject(){
		return ObjRenderableObject2;
	}
	template<>
	const RenderableObject2 & getObject() const{
		return ObjRenderableObject2;
	}
	template<>
	RenderableObject3 & getObject(){
		return ObjRenderableObject3;
	}
	template<>
	const RenderableObject3 & getObject() const{
		return ObjRenderableObject3;
	}
	template<>
	RenderableObject4 & getObject(){
		return ObjRenderableObject4;
	}
	template<>
	const RenderableObject4 & getObject() const{
		return ObjRenderableObject4;
	}
	template<>
	RenderableObject5 & getObject(){
		return ObjRenderableObject5;
	}
	template<>
	const RenderableObject5 & getObject() const{
		return ObjRenderableObject5;
	}
	template<>
	RenderableObject6 & getObject(){
		return ObjRenderableObject6;
	}
	template<>
	const RenderableObject6 & getObject() const{
		return ObjRenderableObject6;
	}
	template<>
	RenderableObject7 & getObject(){
		return ObjRenderableObject7;
	}
	template<>
	const RenderableObject7 & getObject() const{
		return ObjRenderableObject7;
	}
	template<>
	RenderableObject8 & getObject(){
		return ObjRenderableObject8;
	}
	template<>
	const RenderableObject8 & getObject() const{
		return ObjRenderableObject8;
	}
	template<>
	RenderableObject9 & getObject(){
		return ObjRenderableObject9;
	}
	template<>
	const RenderableObject9 & getObject() const{
		return ObjRenderableObject9;
	}
	template<>
	RenderableObject10 & getObject(){
		return ObjRenderableObject10;
	}
	template<>
	const RenderableObject10 & getObject() const{
		return ObjRenderableObject10;
	}
	template<>
	RenderableObject11 & getObject(){
		return ObjRenderableObject11;
	}
	template<>
	const RenderableObject11 & getObject() const{
		return ObjRenderableObject11;
	}
	private:
	EnemyLayer(c_lref_t) = delete;
	EnemyLayer(rref_t) = delete;
	void operator = (c_lref_t) = delete;
	void operator = (rref_t) = delete;
};
template<>
inline void ::gc::Renderer::renderLayer(const EnemyLayer & l){
	if (l.getObject<RenderableObject2>().isVisible) this->render(l.getObject<RenderableObject2>().getCurrentSprite(), l.getObject<RenderableObject2>().pos);
	if (l.getObject<RenderableObject3>().isVisible) this->render(l.getObject<RenderableObject3>().getCurrentSprite(), l.getObject<RenderableObject3>().pos);
	if (l.getObject<RenderableObject4>().isVisible) this->render(l.getObject<RenderableObject4>().getCurrentSprite(), l.getObject<RenderableObject4>().pos);
	if (l.getObject<RenderableObject5>().isVisible) this->render(l.getObject<RenderableObject5>().getCurrentSprite(), l.getObject<RenderableObject5>().pos);
	if (l.getObject<RenderableObject6>().isVisible) this->render(l.getObject<RenderableObject6>().getCurrentSprite(), l.getObject<RenderableObject6>().pos);
	if (l.getObject<RenderableObject7>().isVisible) this->render(l.getObject<RenderableObject7>().getCurrentSprite(), l.getObject<RenderableObject7>().pos);
	if (l.getObject<RenderableObject8>().isVisible) this->render(l.getObject<RenderableObject8>().getCurrentSprite(), l.getObject<RenderableObject8>().pos);
	if (l.getObject<RenderableObject9>().isVisible) this->render(l.getObject<RenderableObject9>().getCurrentSprite(), l.getObject<RenderableObject9>().pos);
	if (l.getObject<RenderableObject10>().isVisible) this->render(l.getObject<RenderableObject10>().getCurrentSprite(), l.getObject<RenderableObject10>().pos);
	if (l.getObject<RenderableObject11>().isVisible) this->render(l.getObject<RenderableObject11>().getCurrentSprite(), l.getObject<RenderableObject11>().pos);
}
