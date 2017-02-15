#pragma once
#include "SFML/Graphics.hpp"
#include "GC/Sprite.h"
#include "GC/Utils.h"

namespace gc
{	
	class SpriteFrame : public ClassTraits<SpriteFrame>
	{
		friend class Camera;
		Sprite _sprite;
		float _dur;
	public:
		inline SpriteFrame(Sprite, float duration) noexcept;
		inline SpriteFrame(c_lref_t) noexcept;
		inline c_lref_t operator = (c_lref_t) noexcept;
		inline Sprite::c_lref_t getSprite() const noexcept;
		inline const float getDuration() const noexcept;
	};


	SpriteFrame::SpriteFrame(Sprite a, float duration) noexcept:
		_dur(duration), _sprite(a)
	{}
	SpriteFrame::SpriteFrame(SpriteFrame::c_lref_t a) noexcept:
		_sprite(a._sprite), _dur(a._dur)
	{}
	SpriteFrame::c_lref_t SpriteFrame::operator = (SpriteFrame::c_lref_t a) noexcept{
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