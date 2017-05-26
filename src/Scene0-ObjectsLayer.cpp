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
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void ObjectsLayer::foreach(F && f){
	f(this->getObject<Hero>());
	f(this->getObject<Bullet>());
}