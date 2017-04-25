#include "GC/Utils.h"
#include "GC/SpriteFrame.h"
#include "GC/Numerics.h"
#include "GC/Event.h"

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
		//constructors		
		Animation();
		template<class ... Args>
		Animation & emplaceFrame(Args && ... args);

		//getters
		const Bool 				isPlay() const noexcept;
		const SpriteFrame & 	getCurrentSpriteFrame() const noexcept;
		const Sprite &			getCurrentSprite() const noexcept;
		const float 			getCurrentSpeed() const noexcept;
		const U32 				getCurrentFrameIndex() const noexcept;

		//setters
		Animation & setCurrentSpeed(float speed) noexcept;
		Animation & start() noexcept;
		Animation & pause() noexcept;
		Animation & stop() noexcept;
		Animation & update(float dt) noexcept;

		//events
		const Event<Animation &> & onEnd;
		const Event<Animation &> & onNextFrame;
		const Event<Animation &> & onStart;
		const Event<Animation &> & onStop;
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
		void _Animation_Update_Helper<AnimationType::Single>::update(Animation<AnimationType::Single> & a, float dt){
			if(!a._isPlays) return;
	
			a._currentAnimationTime += dt;
			if(a._currentAnimationTime > a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed){
				a._currentAnimationTime -= a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed;
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
		void _Animation_Update_Helper<AnimationType::Cyclic>::update(Animation<AnimationType::Cyclic> & a, float dt){
			if (!a._isPlays) return;
	
			a._currentAnimationTime += dt;
			if (a._currentAnimationTime > a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed){
				a._currentAnimationTime -= a._currentAnimationFrame->getDuration() / a._currentAnimationSpeed;
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
		void _Animation_Update_Helper<AnimationType::PingPong>::update(Animation<AnimationType::PingPong> & a, float dt){
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