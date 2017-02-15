#pragma once
#include "GC/Event.h"
#include "GC/Utils.h"

namespace gc
{
	template<>
	class Animation<AnimationType::PingPong> : public ClassTraits<Animation<AnimationType::PingPong>>
	{
		bool								_isPlays;//is animation played now
		std::list<SpriteFrame> 				_SFlist;//Sprite frame list
		std::list<SpriteFrame>::iterator 	_currentAnimationFrame;//current SpriteFrame
		float								_currentAnimationTime;//time, measured from last frame started
		float								_currentAnimationSpeed;//speed of animation
		uint32 								_currentAnimationFrameIndex;//current number of animation frame
		AnimationDirection					_currentAnimationDirection;//direction of animation

		this_t(c_lref_t) = delete;
		this_t(rref_t) = delete;
		void operator = (c_lref_t) = delete;
		void operator = (rref_t) = delete;

		Event<lref_t> _onEnd;
		Event<lref_t> _onNextFrame;
		Event<lref_t> _onStart;
		Event<lref_t> _onStop;
		Event<lref_t> _onPause;
	public:
		//constructors		
		inline this_t() noexcept;
		inline lref_t 	addFrame(SpriteFrame::c_lref_t);
		inline lref_t 	addFrame(SpriteFrame::rref_t);
		template<class ... Args>
		inline lref_t 	emplaceFrame(Args ...);

		//getters
		inline const bool	isPlay() const noexcept;
		inline SpriteFrame::c_lref_t getCurrentSpriteFrame() const noexcept;
		inline Sprite::c_lref_t getCurrentSprite() const noexcept;
		inline const float	getCurrentSpeed() const noexcept;
		inline const uint32 getCurrentFrameIndex() const noexcept; 
		inline const AnimationDirection getCurrentDirection() const noexcept;

		//setters
		inline lref_t setCurrentSpeed(float) noexcept;
		inline lref_t setCurrentDirection(AnimationDirection) noexcept;
		inline lref_t start() noexcept;
		inline lref_t pause() noexcept;
		inline lref_t stop() noexcept;
		inline lref_t update(const float &) noexcept;

		//events
		const Event<lref_t> & onEnd;
		const Event<lref_t> & onNextFrame;
		const Event<lref_t> & onStart;
		const Event<lref_t> & onStop;
		const Event<lref_t> & onPause;
	};
	/*-----------------------------------IMPLEMENTATION----------------------------------------------*/
#pragma region GC_ANIMATION_PINGPONG_REGION
	#define GC_ANIMATION_PINGPONG Animation<AnimationType::PingPong>
		GC_ANIMATION_PINGPONG::Animation() noexcept:
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false), 
		_currentAnimationTime(0.0f), _currentAnimationSpeed(1.0f), _currentAnimationFrameIndex(0),
		//events init
		_onEnd(), onEnd(_onEnd),
		_onNextFrame(), onNextFrame(_onNextFrame),
		_onStart(), onStart(_onStart),
		_onStop(), onStop(_onStop),
		_onPause(), onPause(_onPause)
	{}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::addFrame(const SpriteFrame & a){
		_SFlist.push_back(a);
		return *this;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::addFrame(SpriteFrame && a){
		_SFlist.push_back(::std::move(a));
		return *this;
	}
	template<class ... Args>
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::emplaceFrame(Args... args){
		_SFlist.emplace_back(std::forward<Args>(args)...);
		return *this;
	}
	const bool 		GC_ANIMATION_PINGPONG::isPlay() const noexcept{
		return _isPlays;
	}
	SpriteFrame::c_lref_t GC_ANIMATION_PINGPONG::getCurrentSpriteFrame() const noexcept{
		return *_currentAnimationFrame;
	}
	Sprite::c_lref_t GC_ANIMATION_PINGPONG::getCurrentSprite() const noexcept{
		return _currentAnimationFrame->getSprite();
	}
	const float 	GC_ANIMATION_PINGPONG::getCurrentSpeed() const noexcept{
		return _currentAnimationSpeed;
	}
	const uint32 	GC_ANIMATION_PINGPONG::getCurrentFrameIndex() const noexcept{
		return _currentAnimationFrameIndex;
	}
	const AnimationDirection GC_ANIMATION_PINGPONG::getCurrentDirection() const noexcept{
		return _currentAnimationDirection;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::setCurrentSpeed(float s) noexcept{
		if (s == 0.0f) return *this;
		_currentAnimationSpeed = s;
		return *this;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::start() noexcept{
		_isPlays = true;
		_onStart.emit(*this);
		return *this;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::pause() noexcept{
		_isPlays = false;
		_onPause.emit(*this);
		return *this;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::stop() noexcept{
		_isPlays = false;
		_currentAnimationFrame = _SFlist.begin();
		_currentAnimationFrameIndex = 0;
		_currentAnimationTime = 0.0f;
		_onStop.emit(*this);
		return *this;
	}
	GC_ANIMATION_PINGPONG::lref_t GC_ANIMATION_PINGPONG::update(const float & dt) noexcept {
		if(!_isPlays) return *this;

		_currentAnimationTime += dt;
		if(_currentAnimationTime > _currentAnimationFrame->getDuration() / _currentAnimationSpeed){
			_currentAnimationTime -= _currentAnimationFrame->getDuration() / _currentAnimationSpeed;
			//change current Frame
			_currentAnimationDirection == AnimationDirection::Forward ? ++_currentAnimationFrame : --_currentAnimationFrame;
			//change current Index
			_currentAnimationDirection == AnimationDirection::Forward ? ++_currentAnimationFrameIndex : --_currentAnimationFrameIndex;
			_onNextFrame.emit(*this);
		}
		if(_currentAnimationFrame == _SFlist.begin()){
			_currentAnimationDirection = AnimationDirection::Forward;
			_onEnd.emit(*this);
		}
		if(_currentAnimationFrame == _SFlist.end()){
			_currentAnimationDirection = AnimationDirection::Backward;
			--_currentAnimationFrame;
			--_currentAnimationFrame;
		}
		return *this;
	}
	#undef GC_ANIMATION_PINGPONG
#pragma endregion
}