#pragma once
#include "SFML/Graphics.hpp"
#include "GC/Sprite.h"
#include "GC/Utils.h"

namespace gc
{	
	class SpriteFrame : ClassTraits<SpriteFrame>
	{
		friend class Camera;
		Sprite _sprite
		float _dur;
	public:
		SpriteFrame(Sprite, float duration) noexcept;
		SpriteFrame(c_lref_t) noexcept;
		c_lref_t operator = (c_lref_t) noexcept;
		Sprite::c_lref_t getSprite() const noexcept;
		const float getDuration() const noexcept;
	};


	SpriteFrame::SpriteFrame(Sprite a, float duration) noexcept:
		_dur(duration), _sprite(a)
	{}
	SpriteFrame::SpriteFrame(SpriteFrame::c_lref_t a) noexcept: 
		_sprite(a._sprite), _dur(a._dur)
	{}
	SpriteFrame::c_lref_t operator = (SpriteFrame::c_lref_t a) noexcept{
		if (&a == this) return *this;
		_sprite = a._sprite;
		_dur = a._dur;
		return *this;
	}
	Sprite::c_lref_t SpriteFrame::getSprite() const noexcept{
		return _sprite;
	}
	const float SpriteFrame::getDuration() const noexcept{
		return _dur;
	}
}