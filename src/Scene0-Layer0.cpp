#include "Scene0.h"
Layer0::Layer0(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject0(scene, *this), ObjRenderableObject1(scene, *this)
{
}
Layer0::~Layer0(){
}
void Layer0::onStart(){
	isDone = false;
	self.foreach([](auto & i){
		gc::println(gc::TypeName<decltype(i)>::get(), ' ', i.getPosition().x, ' ', i.getPosition().y);
	});
	ObjRenderableObject0.onStart();
	ObjRenderableObject1.onStart();
}
void Layer0::onUpdate(const float & dt){
	gc::println.dump(self.getObject<Number1>().getPosition());
	ObjRenderableObject0.onUpdate(dt);
	ObjRenderableObject1.onUpdate(dt);
}
template<class F>
void Layer0::foreach(F && f){
	f(this->getObject<Number1>());
	f(this->getObject<Number2>());
}
