variables:
	private:
	float elapsed;
	::gc::AnimationDirection dir;
	u32 _times;
	public:
	::gc::Event<lref_t> onMoveEvent;
methods:
	void onStart(){
		elapsed = 0.0f;
		_times = 0;
		dir = ::gc::AnimationDirection::Forward;
		
	}
	void onUpdate(const float & dt){
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::W))
			--pos.y;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::S))
			++pos.y;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::A))
			--pos.x;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::D))
			++pos.x;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::F))
		{
			pos.x += gc::Random<float>::get(-5, 5);
			pos.y += gc::Random<float>::get(-5, 5);
		}
	}