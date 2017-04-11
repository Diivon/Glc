#pragma once
#include "GC/Event.h"
#include "GC/Utils.h"

namespace gc
{
	template<>
	class Animation<AnimationType::Cyclic> : public ClassTraits<Animation<AnimationType::Cyclic>>
	{
		bool								_isPlays;//is animation played now
		std::list<SpriteFrame> 				_SFlist;//Sprite frame list
		std::list<SpriteFrame>::iterator 	_currentAnimationFrame;//current SpriteFrame
		float								_currentAnimationTime;//time, measured from last frame started
		float								_currentAnimationSpeed;//speed of animation
		size_t 								_currentAnimationFrameIndex;//current number of animation frame

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
		inline const Sprite getCurrentSprite() const noexcept;
		inline const float	getCurrentSpeed() const noexcept;
		inline const size_t getCurrentFrameIndex() const noexcept;

		//setters
		inline lref_t setCurrentSpeed(float s) noexcept;
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
#pragma region GC_ANIMATION_CYCLIC_REGION
	#define GC_ANIMATION_CYCLIC Animation<AnimationType::Cyclic>
	GC_ANIMATION_CYCLIC::Animation() noexcept:
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false), 
		_currentAnimationTime(0.0f), _currentAnimationSpeed(1.0f), _currentAnimationFrameIndex(0),
		//events init
		_onEnd(), onEnd(_onEnd),
		_onNextFrame(), onNextFrame(_onNextFrame),
		_onStart(), onStart(_onStart),
		_onStop(), onStop(_onStop),
		_onPause(), onPause(_onPause)
	{}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::addFrame(const SpriteFrame & a){
		_SFlist.push_back(a);
		return *this;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::addFrame(SpriteFrame && a){
		_SFlist.push_back(::std::move(a));
		return *this;
	}
	template<class ... Args>
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::emplaceFrame(Args... args){
		_SFlist.emplace_back(std::forward<Args>(args)...);
		return *this;
	}
	const bool 		GC_ANIMATION_CYCLIC::isPlay() const noexcept{
		return _isPlays;
	}
	SpriteFrame::c_lref_t GC_ANIMATION_CYCLIC::getCurrentSpriteFrame() const noexcept{
		return *_currentAnimationFrame;
	}
	const Sprite GC_ANIMATION_CYCLIC::getCurrentSprite() const noexcept{
		return _currentAnimationFrame->getSprite();
	}
	const float 	GC_ANIMATION_CYCLIC::getCurrentSpeed() const noexcept{
		return _currentAnimationSpeed;
	}
	const size_t 	GC_ANIMATION_CYCLIC::getCurrentFrameIndex() const noexcept{
		return _currentAnimationFrameIndex;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::setCurrentSpeed(float s) noexcept{
		_currentAnimationSpeed = s;
		return *this;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::start() noexcept{
		_isPlays = true;
		_onStart.emit(*this);
		return *this;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::pause() noexcept{
		_isPlays = false;
		_onPause.emit(*this);
		return *this;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::stop() noexcept{
		_isPlays = false;
		_currentAnimationFrame = _SFlist.begin();
		_currentAnimationFrameIndex = 0;
		_currentAnimationTime = 0.0f;
		_onStop.emit(*this);
		return *this;
	}
	GC_ANIMATION_CYCLIC::lref_t GC_ANIMATION_CYCLIC::update(const float & dt) noexcept{
		if (!_isPlays) return *this;

		_currentAnimationTime += dt;
		if ( _currentAnimationTime > _currentAnimationFrame->getDuration() / _currentAnimationSpeed){
			_currentAnimationTime -= _currentAnimationFrame->getDuration() / _currentAnimationSpeed;
			++_currentAnimationFrame;
			++_currentAnimationFrameIndex;
			_onNextFrame.emit(*this);
		}
		if (_currentAnimationFrame == _SFlist.end()){
			_currentAnimationFrame = _SFlist.begin();
			_currentAnimationFrameIndex = 0;
			_onEnd.emit(*this);
		}
		return *this;
	}
	#undef GC_ANIMATION_CYCLIC
#pragma endregion
}