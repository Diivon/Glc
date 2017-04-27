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
		SpriteFrame() = delete;
		SpriteFrame(const SpriteFrame &) = delete;
		SpriteFrame(SpriteFrame &&) = delete;
		void operator = (const SpriteFrame &) = delete;
		void operator = (SpriteFrame &&) = delete;
	public:
		SpriteFrame(const std::string & path, float duration) noexcept;
		const Sprite & 	getSprite() const noexcept;
		const float 	getDuration() const noexcept;
	};


	inline SpriteFrame::SpriteFrame(const std::string & path, float duration) noexcept:
		_dur(duration), _sprite(path)
	{}
	inline const Sprite & SpriteFrame::getSprite() const noexcept{
		return _sprite;
	}
	inline const float SpriteFrame::getDuration() const noexcept{
		return _dur;
	}
}