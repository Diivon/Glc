#pragma once

#include <string>
#include "GC/Utils.h"
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
		Sprite(c_lref_t);
		Sprite(rref_t);
		c_lref_t operator = (c_lref_t);
		c_lref_t operator = (rref_t);
		//End Basis

		Sprite(const std::string & fileName);
		const ::sf::Sprite getSfSprite() const noexcept;

		lref_t setPosition(Vec2::c_lref_t) noexcept;
		lref_t setOrigin(Vec2::c_lref_t) noexcept;

	};
	/*--------------------------------------------------IMPLEMENTATION--------------------------------------------------------*/
	//Basis
	Sprite::Sprite(Sprite::c_lref_t s):
		_tex(s._tex), _sprite(s._sprite)
	{}
	Sprite::Sprite(Sprite::rref_t s):
		_tex(std::move(s._tex)), _sprite(std::move(s._sprite))
	{}
	Sprite::c_lref_t Sprite::operator = (Sprite::c_lref_t s){
		_tex = s._tex;
		_sprite = s._sprite;
		return *this;
	}
	Sprite::c_lref_t Sprite::operator = (Sprite::rref_t s){
		_tex = std::move(s._tex);
		_sprite = std::move(s._sprite);
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
	const ::sf::Sprite Sprite::getSfSprite() const noexcept{
		return ::sf::Sprite(_tex);
	}

	Sprite::lref_t Sprite::setPosition(Vec2::c_lref_t p) noexcept{
		_sprite.setPosition(p.x, p.y);
		return *this;
	}
	Sprite::lref_t Sprite::setOrigin(Vec2::c_lref_t v) noexcept{
		_sprite.setOrigin(v.x, v.y);
		return *this;
	}
}