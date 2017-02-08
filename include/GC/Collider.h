#pragma once
#include "GC/Vec2.h"

#define GC_COLLIDER_NEGATIVE_SIZE_ENABLE
#undef GC_COLLIDER_NEGATIVE_SIZE_ENABLE

namespace gc
{
	enum class ColliderType
	{
		Rectangle,
		Circle
	}ж
	template<ColliderType T>
	class Collider
	{
		static_assert(false, "new gc::ColliderType was added, please specialize gc::Collider for it");
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
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				if(size.x < 0 || size.y < 0)
					throw 228;
			#endif
		}
		Collider(const Vec2 & pos, float width = 0, float height = 0):
			_pos(pos), _size(width, height)
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				if(width < 0 || height < 0)
					throw 228;
			#endif
		}
		const Vec2 & getPosition(){return _pos;}
		void moveOn(const Vec2 & v){_pos += v;}
		void moveOn(const float & dx, const float & dy){_pos.x += dx; _pos.y += dy;}
		void moveTo(const Vec2 & v){_pos = v;}
		void moveTo(const float & x, const float & y){_pos.x = x; _pos.y = y;}

		const Vec2 & getSize(){return _size;}
		void changeSize(const Vec2 & v){_size += v;}
		void changeSize(const float & dw, const float & dh){_size.x += dw; _size.y += dh;}
		void setSize(const Vec2 & s){_size = s;}
		void setSize(const float & width, const float & height){_size.x = width; _size.y = height;}
		
		float getTopLevel()
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				return (_size.y > 0 ? _pos.y : _pos.y + _size.y);
			#else
				return _pos.y;
			#endif
		}
		float getLowLevel()
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				return (_size.y > 0 ? _pos.y + _size.y : _pos.y);//just inverted
			#else
				return _pos.y + _size.y;
			#endif
		}
		float getLeftLevel()
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				return (_size.x > 0 ? _pos.x : _pos.x + _size.x);
			#else
				return _pos.x;
			#endif
		}
		float getRightLevel()
		{
			#ifdef GC_COLLIDER_NEGATIVE_SIZE_ENABLE
				return (_size.x > 0 ? _pos.x + _size.x : _pos.x);
			#else
				return _pos.x + _size.x;
			#endif
		}
		bool isCollide(const Collider<ColliderType::Rectangle> & c)
		{
			if(getleftlevel() > c.getRightLevel() || getRightLevel() < c.getleftlevel() || 
				getTopLevel() < c.getLowLevel() || getLowLevel() > c.getTopLevel()) return false;
  			return true;
		}
	}
}