#include "Scene0.h"
PhysicalObject2::PhysicalObject2(Scene0 & sc, Layer1 & lr):
self(*this), pos(::gc::Vec2(-200, -200)), scene(sc), layer(lr)
{
}
PhysicalObject2::~PhysicalObject2(){
}
void PhysicalObject2::onStart(){
}
void PhysicalObject2::onUpdate(const float & dt){
}
