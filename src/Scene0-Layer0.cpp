#include "Scene0.h"
Layer0::Layer0(Scene0 & sc):
scene(sc)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
Layer0::~Layer0(){
}
void Layer0::onStart(){
	isDone = false;
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void Layer0::onUpdate(const float & dt){
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
}
