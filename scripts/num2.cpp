variables:
	private:
		int _count;
		bool _isRight;
	public:
methods:
	void onStart(){
		layer.getObject<Number1>().onMoveEvent.sign(*this, &this_t::kek);
		_isRight = true;
		_count = 0;
	}
	void onUpdate(const float & dt){
		if (_count == 2)
			layer.isDone = true;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::I))
			--pos.y;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::K))
			++pos.y;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::J))
			--pos.x;
		if (gc::Keyboard::isKeyPressed(gc::Keyboard::Key::L))
			++pos.x;
	}
	void kek(Number1 & a){
		if(a.pos.x > pos.x)
		{
			if (!_isRight)
			{
				_isRight = true;
				++_count;
			}
		}
		else
			if (_isRight)
			{
				_isRight = false;
				++_count;
			}
	}