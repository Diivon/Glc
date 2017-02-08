variables:
methods:
	void onStart(){
		scene.getObject<RenderableObject0>().onMoveEvent.add(*this, &this_t::kek);
	}
	void onUpdate(const float & dt){
	}
	void kek(RenderableObject0 & a){
		if(a.pos.x > pos.x)
			std::cout << "right" << std::endl;
		else
			std::cout << "left" << std::endl;
	}