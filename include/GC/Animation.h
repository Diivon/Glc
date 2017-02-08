//For using Animation Class Owner must have next methods:
//void onAnimationNextFrame(Animation &);
//void onAnimationEnd(Animation &)
//
//bugs: if dt > any SpriteFrame duration animation will not plays correctly!
#pragma once

#include <list>
#include <utility>
#include "SFML/Graphics.hpp"
#include "GC/SpriteFrame.h"
#include "GC/Utils.h"
#include "GC/Event.h"

namespace gc
{
	enum class AnimationType
	{
		Single,
		Cyclic,
		PingPong,
		Dynamic
	};

	enum class AnimationDirection
	{
		Forward,
		Backward
	};
	template<AnimationType>
	class Animation;
}
	/*interface, which every Animation realise
	template<AnimationType T>
	class Animation : public ::gc::ClassTraits<Animation<T>>
	{
		this_t(c_lref_t) = delete;
		this_t(rref_t) = delete;
		void operator = (typename c_lref_t) = delete;
		void operator = (typename rref_t) = delete;
	public:
		//constructors		
		this_t() noexcept;
		lref_t addFrame(SpriteFrame::c_lref_t);
		lref_t addFrame(SpriteFrame::rref_t);
		template<class ... Args>
		lref_t emplaceFrame(Args ...);

		//getters
		const bool 				isPlay() const noexcept;
		SpriteFrame::c_lref_t 	getCurrentSpriteFrame() const noexcept;
		Sprite::c_lref_t		getCurrentSprite() const noexcept;
		const float 			getCurrentSpeed() const noexcept;
		const uint32 			getCurrentFrameIndex() const noexcept;

		//setters
		lref_t setCurrentSpeed() noexcept;
		lref_t start() noexcept;
		lref_t pause() noexcept;
		lref_t stop() noexcept;
		lref_t update() noexcept;

		//events
		const Event<lref_t> & onEnd;
		const Event<lref_t> & onNextFrame;
		const Event<lref_t> & onStart;
		const Event<lref_t> & onStop;
		const Event<lref_t> & onPause;
	};*/

#include "GC/Animation/Single.h"
#include "GC/Animation/Cyclic.h"
#include "GC/Animation/PingPong.h"
#include "GC/Animation/Dynamic.h"