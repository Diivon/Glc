//For using Animation Class Owner must have next methods:
//void onAnimationNextFrame(Animation &);
//void onAnimationEnd(Animation &)
//
//bugs: if dt > any SpriteFrame duration animation will not plays correctly!
#pragma once

#include "SFML/Graphics.hpp"
#include "GC/SpriteFrame.h"
#include <list>
#include <utility>

namespace gc
{
	enum class AnimationType
	{
		Single,
		Cyclic,
		PingPong
	};

	enum class AnimationDirection
	{
		Forward,
		Backward
	};

	template<class Owner, AnimationType T>
	class Animation{};

	#include "GC/Animation/SingleAnimation.h"
	#include "GC/Animation/CyclicAnimation.h"
	#include "GC/Animation/PingPongAnimation.h"
}