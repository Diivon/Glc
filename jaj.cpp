variables:
	float elapsed;
	::gc::ClassEvent<this_t &> onMoveEvent;
methods:
	void onStart(){
		elapsed = 0.0f;
	}
	void onUpdate(const float & dt){
		elapsed += dt / 20000;
		pos.x += (cos(elapsed * 180 / 3.141527) * 1);
		pos.y += (sin(elapsed * 180 / 3.141527) * 1);
		onMoveEvent.emit(*this);
	}
	void onFenceDieEvent(){
		std::cout << "FENCE DIE, MY LORD" << std::endl;
	}
	void onAnimationEnd(animation_t & a){
		sound.play();
	}