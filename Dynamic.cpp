
namespace gc
{
	template<class Owner>
	class Animation<Owner, AnimationType::Dynamic>
	{
		Owner * 							_owner;//owner of this animation
		bool 								_isPlays;//is animation played now
		std::list<SpriteFrame>				_SFlist;//Sprite frame list
		float 								_currentAnimationTime;//time, measured from last frame started
		std::list<SpriteFrame>::iterator 	_currentAnimationFrame;//current SpriteFrame
		float 								_currentAnimationSpeed;//speed of animation
		AnimationDirection					_currentAnimationDirection;//direction of animation
		AnimationType						_currentAnimationType;//type of animation
	public:
		Animation(Owner * own):
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false), 
		_owner(own),_currentAnimationTime(0), _currentAnimationSpeed(1), 
		_currentAnimationDirection(AnimationDirection::Forward), _currentAnimationType(AnimationType::Single)
		{}
		Animation(Owner * own, AnimationType at):
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false), 
		_owner(own),_currentAnimationTime(0), _currentAnimationSpeed(1), 
		_currentAnimationDirection(AnimationDirection::Forward), _currentAnimationType(at)
		{}
		//add SpriteFrame to back of this animation
		void 			addFrame(const SpriteFrame & a){_SFlist.push_back(a);}
		void 			addFrame(SpriteFrame && a){_SFlist.push_back(std::move(a));}
		void 			emplaceFrame(const char * const str, float dur){_SFlist.emplace_back(str, dur);}
		//start to play animation
		void 			start(){_isPlays = true;}
		//stop animation on current frame
		void 			stop(){_isPlays = false;}
		//if animation is plays - return true, else false;
		bool 			isPlays(){return _isPlays;}
		//return current SpriteFrame
		SpriteFrame & 	getCurrentSpriteFrame(){return *_currentAnimationFrame;}
		//return current animation speed
		float 			getCurrentAnimationSpeed(){return _currentAnimationSpeed;}
		//
		void 			setCurrentAnimationSpeed(float s){if(s == 0.0f) return; _currentAnimationSpeed = s;}
		//
		const AnimationDirection & getCurrentAnimationDirection(){return _currentAnimationDirection;}
		void			setCurrentAnimationDirection(AnimationDirection ad){_currentAnimationDirection = at;}
		const AnimationType & getCurrentAnimationType(){return _currentAnimationType;}
		void 			setCurrentAnimationType(AnimationType at){_currentAnimationType = at;}
		void update(const float & dt)
		{
			if(!_isPlays) return;
			switch(_currentAnimationType)
			{
				case Single:
				{
					
				}
				case Cyclic:
				{

				}
				case PingPong:
				{

				}
				default:
				{
					
				}
			}
		}
	};
}