#pragma once
#include "Box2D/Dynamics/b2Fixture.h"

namespace gc{	
	class Material{
		float32 friction;
		float32 restitution;
		float32 density;
	public:
		Material & setFriction(float32 value) noexcept 	{friction = value; return *this;}
		Material & setRestitution(float32 value)noexcept{restitution = value; return *this;}
		Material & setDensity(float32 value)noexcept	{density = value; return *this;}
	
		b2FixtureDef getB2Fixture(){
			b2FixtureDef result;
			result.density = density;
			result.friction = friction;
			result.restitution = restitution;
			return result;
		}
	};
}