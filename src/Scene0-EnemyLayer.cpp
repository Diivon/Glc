#include "Scene0.h"
EnemyLayer::EnemyLayer(Scene0 & sc):
scene(sc), self(*this)
, ObjRenderableObject2(scene, *this), ObjRenderableObject3(scene, *this), ObjRenderableObject4(scene, *this), ObjRenderableObject5(scene, *this), ObjRenderableObject6(scene, *this), ObjRenderableObject7(scene, *this), ObjRenderableObject8(scene, *this), ObjRenderableObject9(scene, *this), ObjRenderableObject10(scene, *this), ObjRenderableObject11(scene, *this)
{
}
EnemyLayer::~EnemyLayer(){
}
void EnemyLayer::onStart(){
	ObjRenderableObject2.onStart();
	ObjRenderableObject3.onStart();
	ObjRenderableObject4.onStart();
	ObjRenderableObject5.onStart();
	ObjRenderableObject6.onStart();
	ObjRenderableObject7.onStart();
	ObjRenderableObject8.onStart();
	ObjRenderableObject9.onStart();
	ObjRenderableObject10.onStart();
	ObjRenderableObject11.onStart();
}
void EnemyLayer::onUpdate(const float & dt){
	ObjRenderableObject2.onUpdate(dt);
	ObjRenderableObject3.onUpdate(dt);
	ObjRenderableObject4.onUpdate(dt);
	ObjRenderableObject5.onUpdate(dt);
	ObjRenderableObject6.onUpdate(dt);
	ObjRenderableObject7.onUpdate(dt);
	ObjRenderableObject8.onUpdate(dt);
	ObjRenderableObject9.onUpdate(dt);
	ObjRenderableObject10.onUpdate(dt);
	ObjRenderableObject11.onUpdate(dt);
}
template<class F>
void EnemyLayer::foreach(F && f){
	f(this->getObject<RenderableObject2>());
	f(this->getObject<RenderableObject3>());
	f(this->getObject<RenderableObject4>());
	f(this->getObject<RenderableObject5>());
	f(this->getObject<RenderableObject6>());
	f(this->getObject<RenderableObject7>());
	f(this->getObject<RenderableObject8>());
	f(this->getObject<RenderableObject9>());
	f(this->getObject<RenderableObject10>());
	f(this->getObject<RenderableObject11>());
}
