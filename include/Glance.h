#pragma once
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
#include "GC/SemanticHelpers.h"
#include "GC/Numerics.h"
#include "GC/Wrap.h"
#include "GC/Iterate.h"
#include "GC/Print.h"
#include "GC/Mouse.h"
#include "GC/Property.h"
#include "GC/Line.h"

using namespace std::string_literals;
namespace gc{
	using Color = sf::Color;
}

GC_SPECIALIZE_PRINT(const ::gc::Vec2 & v) {
	gc::print("{x: ", v.x, ", y: ", v.y, "}");
}
GC_SPECIALIZE_DEBUG_LOG(const gc::Vec2 & v){
	str += "{x: ";
	str += std::to_string(v.x).data();
	str += ", y: ";
	str += std::to_string(v.y).data();
	str += '}';
}
GC_SPECIALIZE_DEBUG_LOG(const std::string & s){
	str += s.data();
}
GC_SPECIALIZE_DEBUG_LOG(const char & v){
	str += v;
}
GC_SPECIALIZE_DEBUG_LOG(const gc::c_string & v){
		str += v;
}