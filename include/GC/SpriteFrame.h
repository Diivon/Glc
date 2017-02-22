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
		inline SpriteFrame(const std::string & path, float duration) noexcept;
		inline SpriteFrame(c_lref_t) noexcept;
		inline c_lref_t operator = (c_lref_t) noexcept;
		inline const Sprite getSprite() const noexcept;
		inline const float getDuration() const noexcept;
	};


	SpriteFrame::SpriteFrame(const std::string & path, float duration) noexcept:
		_dur(duration), _sprite(path)
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
	const Sprite SpriteFrame::getSprite() const noexcept{
		return _sprite;
	}
	const float SpriteFrame::getDuration() const noexcept{
		return _dur;
	}
}