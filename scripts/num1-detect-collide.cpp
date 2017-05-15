variables:
	public: 
		//your public variables here
		float distance;
	private: 
		//your private variables here
methods:
	void onStart(){
		//it's called once, before game cycle begins
	}
	void onUpdate(const float & dt){
		//onUpdate called once per frame
		distance = (pos - layer.getObject<Number2>().pos).getLength();
		gc::debug
		.log("----------------------------------------------")
		.log(distance)
		.log(layer.getObject<Number2>().collider.isCollide(self.collider), ' ', self.collider.getSize());
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::Space))
			gc::debug
			.log( (scene.getLayer<Layer1>().getObject<PhysicalObject2>().pos - pos).getLength() );
	}
	//else methods here
constructors:
	//this code will be in class constructor-specific synthax example is: 
	//str("awd"), dur(6)
	distance(0)
constructor_body:
	//this code will be runned when constructor of object will be called
	//use it for primary initialization only!!!