variables:
	public: 
		//your public variables here
	private: 
		//your private variables here
methods:
	void onStart(){
		//it's called once, before game cycle begins
	}
	void onUpdate(const float & dt){
		//onUpdate called once per frame
		gc::debug << "CS: " << layer.getObject<Number2>().collider.getRadius();
		if (layer.getObject<Number2>().collider.isCollide(self.collider))
			gc::debug << "1 ";
		else 
			gc::debug << "0 ";
	}
	//else methods here