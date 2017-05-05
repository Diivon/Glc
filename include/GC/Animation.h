#pragma once
#include "Utils.h"
#include "SpriteFrame.h"
#include "Numerics.h"
#include "Event.h"

namespace gc{
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
	template<AnimationType T>
	class Animation;
	namespace priv {
		template<AnimationType T>
		struct _Animation_Update_Helper {
			void update(Animation<T> &, float dt);
		};
		template<>
		struct _Animation_Update_Helper<AnimationType::Single>{
			void update(Animation<AnimationType::Single> & a, float dt);
		};
		template<>
		struct _Animation_Update_Helper<AnimationType::Cyclic>{
			void update(Animation<AnimationType::Cyclic> & a, float dt);
		};
		template<>
		struct _Animation_Update_Helper<AnimationType::PingPong>{
			gc::AnimationDirection 	_currentAnimationDirection;
			_Animation_Update_Helper():_currentAnimationDirection(gc::AnimationDirection::Forward){}
			void update(Animation<AnimationType::PingPong> & a, float dt);
		};
	}
	template<AnimationType T> 
	class Animation
	{
	public:
		//only constructor
		Animation();

		//get arguments, and emplace SpriteFrame in self
		template<class ... Args>
		Animation & emplaceFrame(Args && ... args);


		//return true if animation is player right now
		const Bool 				isPlay() const noexcept;
		//return const reference to current SpriteFrame
		const SpriteFrame & 	getCurrentSpriteFrame() const noexcept;
		//return const reference to current Sprite
		const Sprite &			getCurrentSprite() const noexcept;
		//return current speed of animation
		const float 			getCurrentSpeed() const noexcept;
		//return current index of animation
		const U32 				getCurrentFrameIndex() const noexcept;

		//setters
		//sets the current animation speed passing '1' will make animation run normally, 2 make it run twice faster
		Animation & setCurrentSpeed(float speed) noexcept;
		//starts the animation
		Animation & start() noexcept;
		//pause the animation
		Animation & pause() noexcept;
		//stop the animation
		Animation & stop() noexcept;
		//update the animation, dt is elapsed milliseconds
		Animation & update(float dt) noexcept;


		//events
		//emited when whole animation is ended
		const Event<Animation &> & onEnd;
		//emited when new frame is became current
		const Event<Animation &> & onNextFrame;
		//emited when start() is called
		const Event<Animation &> & onStart;
		//emited when stop() is called
		const Event<Animation &> & onStop;
		//emited when pause() is called
		const Event<Animation &> & onPause;

	private:
		bool								_isPlays;//is animation played now
		std::list<SpriteFrame> 				_SFlist;//Sprite frame list
		std::list<SpriteFrame>::iterator 	_currentAnimationFrame;//current SpriteFrame
		float								_currentAnimationTime;//time, measured from last frame started
		float								_currentAnimationSpeed;//speed of animation
		u32 								_currentAnimationFrameIndex;//current number of animation frame
		priv::_Animation_Update_Helper<T>	_updateHelper;
		
		Animation(const Animation &) = delete;
		Animation(Animation &&) = delete;
		void operator = (const Animation &) = delete;
		void operator = (Animation &&) = delete;

		Event<Animation &> _onEnd;
		Event<Animation &> _onNextFrame;
		Event<Animation &> _onStart;
		Event<Animation &> _onStop;
		Event<Animation &> _onPause;

		friend struct priv::_Animation_Update_Helper<T>;
	};
}
	//--------------------------------implementation-----------------------------------------
namespace gc{
	namespace priv{
		inline void _Animation_Update_Helper<AnimationType::Single>::update(Animation<AnimationType::Single> & a, float dt){
			if(!a._isPlays) return;
	
			a._currentAnimationTime += dt;
			auto dur = a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed;
			if(a._currentAnimationTime > dur){
				a._currentAnimationTime -= dur;
				++a._currentAnimationFrame;
				++a._currentAnimationFrameIndex;
				a._onNextFrame.emit(a);
			}
			if(a._currentAnimationFrame == a._SFlist.end()){
				a._isPlays = false;
				a._currentAnimationFrame = a._SFlist.begin();
				a._currentAnimationFrameIndex = 0;
				a._onEnd.emit(a);
			}
			return;
		}
		inline void _Animation_Update_Helper<AnimationType::Cyclic>::update(Animation<AnimationType::Cyclic> & a, float dt){
			if (!a._isPlays) return;
	
			a._currentAnimationTime += dt;
			auto dur = a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed;
			if (a._currentAnimationTime >= dur){
				a._currentAnimationTime -= dur;
				++a._currentAnimationFrame;
				++a._currentAnimationFrameIndex;
				a._onNextFrame.emit(a);
			}
			if (a._currentAnimationFrame == a._SFlist.end()){
				a._currentAnimationFrame = a._SFlist.begin();
				a._currentAnimationFrameIndex = 0;
				a._onEnd.emit(a);
			}
			return;
		}
		inline void _Animation_Update_Helper<AnimationType::PingPong>::update(Animation<AnimationType::PingPong> & a, float dt){
			if(!a._isPlays) return;
	
			a._currentAnimationTime += dt;
			if(a._currentAnimationTime > a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed){
				a._currentAnimationTime -= a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed;
				//change current Frame
				_currentAnimationDirection == AnimationDirection::Forward ? ++a._currentAnimationFrame : --a._currentAnimationFrame;
				//change current Index
				_currentAnimationDirection == AnimationDirection::Forward ? ++a._currentAnimationFrameIndex : --a._currentAnimationFrameIndex;
				a._onNextFrame.emit(a);
			}
			if(a._currentAnimationFrame == a._SFlist.begin()){
				_currentAnimationDirection = AnimationDirection::Forward;
				a._onEnd.emit(a);
			}
			if(a._currentAnimationFrame == a._SFlist.end()){
				_currentAnimationDirection = AnimationDirection::Backward;
				--a._currentAnimationFrame;
				--a._currentAnimationFrame;
			}
			return;
		}
	}
	template<AnimationType T>
	Animation<T>::Animation() :
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false),
		_currentAnimationTime(0.0f), _currentAnimationSpeed(1.0f), _currentAnimationFrameIndex(0),
		//events init
		_onEnd(), onEnd(_onEnd),
		_onNextFrame(), onNextFrame(_onNextFrame),
		_onStart(), onStart(_onStart),
		_onStop(), onStop(_onStop),
		_onPause(), onPause(_onPause)
	{}
	template<AnimationType T>
	template<class ... Args>
	Animation<T> & Animation<T>::emplaceFrame(Args && ... args){
		_SFlist.emplace_back(std::forward<Args>(args)...);
		return *this;
	}
	template<AnimationType T>
	const Bool Animation<T>::isPlay() const noexcept{
		return _isPlays;
	}
	template<AnimationType T>
	const SpriteFrame & Animation<T>::getCurrentSpriteFrame() const noexcept{
		return *_currentAnimationFrame;
	}
	template<AnimationType T>
	const Sprite & Animation<T>::getCurrentSprite() const noexcept{
		return _currentAnimationFrame->getSprite();
	}
	template<AnimationType T>
	const float Animation<T>::getCurrentSpeed() const noexcept{
		return _currentAnimationSpeed;
	}
	template<AnimationType T>
	const U32 Animation<T>::getCurrentFrameIndex() const noexcept{
		return _currentAnimationFrameIndex;
	}
	template<AnimationType T>
	Animation<T> & Animation<T>::setCurrentSpeed(float speed) noexcept{
		_currentAnimationSpeed = speed;
		return *this;
	}
	template<AnimationType T>
	Animation<T> & Animation<T>::start() noexcept{
		_isPlays = true;
		_currentAnimationFrame = _SFlist.begin();
		return *this;
	}
	template<AnimationType T>
	Animation<T> & Animation<T>::pause() noexcept{
		_isPlays = false;
		return *this;
	}
	template<AnimationType T>
	Animation<T> & Animation<T>::stop() noexcept{
		_isPlays = false;
		_currentAnimationFrame = _SFlist.begin();
		_currentAnimationFrameIndex = 0;
		_currentAnimationTime = 0.0f;
		_onStop.emit(*this);
		return *this;
	}
	template<AnimationType T>
	Animation<T> & Animation<T>::update(float dt) noexcept{
		_updateHelper.update(*this, dt);
		return *this;
	}
}