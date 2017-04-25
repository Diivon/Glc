variables: 
		private://your private variables here
		public://your public variables here
			bool isDone;
methods:
	void onStart(){
		//it's called once, before game cycle begins
		isDone = false;
		self.foreach([](auto & i){
			gc::println(gc::TypeName<decltype(i)>::get(), ' ', i.getPosition().x, ' ', i.getPosition().y);
		});
	}
	void onUpdate(const float & dt){
		//onUpdate called once per frame
	}
	//else methods here