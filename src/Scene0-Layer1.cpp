#include "Scene0.h"
Layer1::Layer1(Scene0 & sc):
scene(sc), self(*this)
, ObjPhysicalObject2(scene, *this)
{
}
Layer1::~Layer1(){
}
void Layer1::onStart(){
	ObjPhysicalObject2.onStart();
}
void Layer1::onUpdate(const float & dt){
	ObjPhysicalObject2.onUpdate(dt);
}
template<class F>
void Layer1::foreach(F && f){
	f(this->getObject<PhysicalObject2>());
}
