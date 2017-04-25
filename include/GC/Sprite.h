#pragma once

#include <string>
#include "GC/Utils.h"
#include "GC/Vec2.h"
#include "SFML/Graphics.hpp"
namespace gc
{
	class Sprite : public ClassTraits<Sprite>
	{
		sf::Texture _tex;
		sf::Sprite _sprite;
		Sprite() = delete;
	public:
		//Basis
		inline Sprite(c_lref_t);
		inline Sprite(rref_t);
		inline c_lref_t operator = (c_lref_t);
		inline c_lref_t operator = (rref_t);
		//End Basis

		inline Sprite(const std::string & fileName);
		inline const ::sf::Sprite & getSfSprite() const noexcept;

		inline lref_t setPosition(Vec2::c_lref_t) noexcept;
		inline lref_t setOrigin(Vec2::c_lref_t) noexcept;

		inline Vec2 getPosition() const noexcept;
		inline Vec2 getSize() const noexcept;

	};
	/*--------------------------------------------------IMPLEMENTATION--------------------------------------------------------*/
	//Basis
	Sprite::Sprite(Sprite::c_lref_t s):
		_tex(s._tex), _sprite(s._sprite)
	{}
	Sprite::Sprite(Sprite::rref_t s):
		_tex(s._tex), _sprite(s._sprite)
	{}
	Sprite::c_lref_t Sprite::operator = (Sprite::c_lref_t s){
		_tex = s._tex;
		_sprite = s._sprite;
		return *this;
	}
	Sprite::c_lref_t Sprite::operator = (Sprite::rref_t s){
		_tex = s._tex;
		_sprite = s._sprite;
		return *this;
	}
	//End Basis
	Sprite::Sprite(const std::string & file):
		_tex(), _sprite()
	{
		auto v = getByteVectorFromFile(file);
		_tex.loadFromMemory(v.data(), v.size());
		_sprite.setTexture(_tex);
	}
	const ::sf::Sprite & Sprite::getSfSprite() const noexcept{
		return _sprite;
	}

	Sprite::lref_t Sprite::setPosition(Vec2::c_lref_t p) noexcept{
		_sprite.setPosition(p.x, p.y);
		return *this;
	}
	Sprite::lref_t Sprite::setOrigin(Vec2::c_lref_t v) noexcept{
		_sprite.setOrigin(v.x, v.y);
		return *this;
	}
	Vec2 Sprite::getPosition() const noexcept{
		return Vec2(_sprite.getPosition().x, _sprite.getPosition().y);
	}
	Vec2 Sprite::getSize() const noexcept{
		return Vec2(
			static_cast<float>(_tex.getSize().x),
			static_cast<float>(_tex.getSize().y)
		);
	}
}