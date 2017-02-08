
template<class Owner>
class Animation<Owner, AnimationType::PingPong>{
	Owner * 							_owner;//owner of this animation
	bool 								_isPlays;//is animation played now
	std::list<SpriteFrame> 				_SFlist;//Sprite frame list
	float 								_currentAnimationTime;//time, measured from last frame started
	std::list<SpriteFrame>::iterator 	_currentAnimationFrame;//current SpriteFrame
	float 								_currentAnimationSpeed;//speed of animation
	AnimationDirection					_currentAnimationDirection;//direction of animation
public:
	Animation(Owner * own):
		_SFlist(), _currentAnimationFrame(_SFlist.begin()), _isPlays(false), 
		_owner(own),_currentAnimationTime(0), _currentAnimationSpeed(1), 
		_currentAnimationDirection(AnimationDirection::Forward)
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
	AnimationDirection getCurrentAnimationDirection(){return _currentAnimationDirection;}
	//
	void 			NextFrame(){
			_currentAnimationDirection == AnimationDirection::Forward ? ++_currentAnimationFrame : --_currentAnimationFrame;
			if(_currentAnimationFrame == _SFlist.end()){
				_currentAnimationDirection = AnimationDirection::Backward;
				--_currentAnimationFrame;
				--_currentAnimationFrame;
			}
			if(_currentAnimationFrame == _SFlist.begin()){
				_currentAnimationDirection = AnimationDirection::Forward;
				_owner->onAnimationEnd(*this);
			}
		}

	//update animation condition, dt is ms
	void 			update(const float & dt){
		if(!_isPlays) return;

		_currentAnimationTime += dt;
		if(_currentAnimationTime > _currentAnimationFrame->getDuration() / _currentAnimationSpeed){
			_currentAnimationTime -= _currentAnimationFrame->getDuration() / _currentAnimationSpeed;
			_currentAnimationDirection == AnimationDirection::Forward ? ++_currentAnimationFrame : --_currentAnimationFrame;
			_owner->onAnimationNextFrame(*this);
		}
		if(_currentAnimationFrame == _SFlist.begin()){
			_currentAnimationDirection = AnimationDirection::Forward;
			_owner->onAnimationEnd(*this);
		}
		if(_currentAnimationFrame == _SFlist.end()){
			_currentAnimationDirection = AnimationDirection::Backward;
			--_currentAnimationFrame;
			--_currentAnimationFrame;
		}
	}
};