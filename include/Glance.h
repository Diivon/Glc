#include "GC/Vec2.h"
#include "GC/Animation.h"
#include "GC/Debug.h"
#include "GC/Delegate.h"
#include "GC/Event.h"
#include "GC/Camera.h"
#include "GC/Sprite.h"
#include "GC/Sound.h"
#include "GC/Collider.h"
#include "GC/Renderer.h"
#include "GC/Keyboard.h"
#include "GC/Utils.h"
#include "GC/Random.h"
#include "GC/Allocator.h"
#include "GC/Memory.h"
#include "GC/SemanticHelpers.h"
#include "GC/Numerics.h"
//#include "GC/String.h"
#include "GC/Wrap.h"
#include "GC/Iterate.h"
#include "GC/Print.h"

GC_SPECIALIZE_PRINT(const ::gc::Vec2 & v) {
	gc::print("{x: ", v.x, ", y: ", v.y, "}");
}
GC_SPECIALIZE_PRINT(const gc::Collider<gc::ColliderType::Circle> & c) {
	gc::print("position: ", c.getPosition(), ", radius: ", c.getRadius());
}
GC_SPECIALIZE_PRINT(const gc::Collider<gc::ColliderType::Rectangle> & c) {
	gc::print("position: ", c.getPosition(), ", size: ", c.getSize());
}