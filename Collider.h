#pragma once
#include "GC/Vec2.h"
namespace gc
{
	enum class ColliderType
	{
		Rectangle,
		Circle
	}
	template<ColliderType T>
	class Collider
	{
		template<class ... T>
		Collider(T ... t)
		{static_assert(true, "new gc::ColliderType was added, please specialize gc::Collider for it");}
	};
	template<>
	class Collider<ColliderType::Rectangle>
	{
		Vec2 _pos;//left up corner;
		Vec2 _size;//where x is width, and y is height
	public:
		Collider():
			_pos(), _size()
		{}
		Collider(const Vec2 & pos, const Vec2 & size):
			_pos(pos), _size(size)
		{}
		Collider(const Vec2 & pos, unsigned int width = 0, unsigned int height = 0):
			_pos(pos), _size(width, height)
		{}
		float getTopLevel()
		{/*
			if(_size.y > 0)//if every else rect is under _pos.y
				return _pos.y;
			else //if rect is higher than _pos.y
				return _pos.y + _size.y;*/
			return (_size.y > 0 ? _pos.y : _pos.y + _size.y);
		}
		float getLowLevel()
		{
			return (_size.y > 0 ? _pos.y + _size.y : _pos.y);//just inverted
		}
		float getLeftLevel()
		{
			return (_size.x > 0 ? _pos.x : _pos.x + _size.x);
		}
		float getRightLevel()
		{
			return (_size.x > 0 ? _pos.x + _size.x : _pos.x);
		}
		bool isCollide(const Collider & c)
		{
			if(this->getLeftLevel() < c.getLeftLevel()){//if we leftward than argument 
				if(this->getRightLevel() < c.getRightLevel())//if we not even together
					return false;
				else 
					
			}
			else{

			}
		}
	}
}