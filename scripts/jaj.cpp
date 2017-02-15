variables:
	private:
	float elapsed;
	::gc::AnimationDirection dir;
	public:
	::gc::Event<lref_t> onMoveEvent;
methods:
	void onStart(){
		elapsed = 0.0f;
		dir = ::gc::AnimationDirection::Forward;
	}
	void onUpdate(const float & dt){
		if(!layer.isDone)
		{
			if (pos.x > 100)
				dir = ::gc::AnimationDirection::Backward;
			if (pos.x < 25)
				dir = ::gc::AnimationDirection::Forward;
			dir == ::gc::AnimationDirection::Forward ? ++pos.x : --pos.x;
			onMoveEvent.emit(*this);
		}
		if (layer.isDone)
			layer.getObject<Number2>().pos = gc::Vec2(0,0);
	}