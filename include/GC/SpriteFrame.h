#pragma once
#include "SFML/Graphics.hpp"
#include "GC/Sprite.h"
#include "GC/Utils.h"

namespace gc
{	
	class SpriteFrame
	{
		friend class Camera;
		Sprite _sprite;
		float _dur;
	public:
		inline 					SpriteFrame(const std::string & path, float duration) noexcept;
		inline 					SpriteFrame(const SpriteFrame &) noexcept;
		inline 					SpriteFrame(const Sprite &, float dur) noexcept;
		inline const SpriteFrame & 		operator = (const SpriteFrame &) noexcept;
		inline const Sprite & 	getSprite() const noexcept;
		inline const float 		getDuration() const noexcept;
	};


	inline SpriteFrame::SpriteFrame(const std::string & path, float duration) noexcept:
		_dur(duration), _sprite(path)
	{}
	inline SpriteFrame::SpriteFrame(const SpriteFrame & a) noexcept:
		_sprite(a._sprite), _dur(a._dur)
	{}
	inline SpriteFrame::SpriteFrame(const Sprite & s, float dur) noexcept:
		_sprite(s), _dur(dur)
	{}
	inline const SpriteFrame & SpriteFrame::operator = (const SpriteFrame & a) noexcept{
		if (&a == this) return *this;
		_sprite = a._sprite;
		_dur = a._dur;
		return *this;
	}
	inline const Sprite & SpriteFrame::getSprite() const noexcept{
		return _sprite;
	}
	inline const float SpriteFrame::getDuration() const noexcept{
		return _dur;
	}
}