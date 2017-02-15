variables: 
		private://your private variables here
		public://your public variables here
			bool isDone;
methods:
	void onStart(){
		//it's called once, before game cycle begins
		isDone = false;
	}
	void onUpdate(const float & dt){
		//onUpdate called once per frame
	}
	//else methods here