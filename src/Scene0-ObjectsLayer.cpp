#include "Scene0.h"
ObjectsLayer::ObjectsLayer(Scene0 & sc) try:
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
catch(std::exception & e){
	std::cout << "ObjectsLayer throws: " << e.what() << std::endl;
	throw;
}
ObjectsLayer::~ObjectsLayer(){
}
void ObjectsLayer::onStart(){
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void ObjectsLayer::onUpdate(const float & dt){
	if(ObjRenderableObject0.isActive) ObjRenderableObject0.onUpdate(dt);
	if(ObjRenderableObject1.isActive) ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void ObjectsLayer::foreach(F && f){
	f(this->getObject<Hero>());
	f(this->getObject<Bullet>());
}
