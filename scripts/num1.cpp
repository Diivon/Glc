variables:
	private:
	float elapsed;
	::gc::AnimationDirection dir;
	uint32 _times;
	public:
	::gc::Event<lref_t> onMoveEvent;
methods:
	void onStart(){
		elapsed = 0.0f;
		_times = 0;
		dir = ::gc::AnimationDirection::Forward;
		//layer.getObject<Number2>().animation.onNextFrame.sign([this](auto &){gc::debug << std::string("onNextFrame event emited ");});
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
			layer.getObject<Number2>().pos = scene.getLayer<Layer1>().getObject<PhysicalObject2>().pos;
	}