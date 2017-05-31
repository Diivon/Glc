#pragma once

#include <string>
#include "Utils.h"
#include "Vec2.h"
#include "SemanticHelpers.h"
#include "SFML/Graphics.hpp"

namespace gc
{
	class Sprite
	{
		sf::Texture _tex;
		sf::Sprite _sprite;
		Sprite() = delete;
		Sprite(const Sprite &) = delete;
		Sprite(Sprite &&) = delete;
		void operator = (const Sprite &) = delete;
		void operator = (Sprite &&) = delete;
	public:
		inline Sprite(const std::string & fileName);
		inline ::sf::Sprite getSfSprite() const noexcept;

		inline Sprite & setPosition(Vec2 const &) noexcept;
		inline Sprite & setOrigin(Vec2 const &) noexcept;
		inline Sprite & rotate(sh::priv::degree_t<float> const &) noexcept;
		inline Sprite & rotate(sh::priv::radian_t<float> const &) noexcept;

		inline Sprite & setRotation(sh::priv::degree_t<float> const &) noexcept;

		inline Vec2 getPosition() const noexcept;
		inline Vec2 getCenter() const noexcept;
		inline Vec2 getSize() const noexcept;
	};
	/*--------------------------------------------------IMPLEMENTATION--------------------------------------------------------*/
	inline Sprite::Sprite(const std::string & file):
		_tex(), _sprite()
	{
		try{
			auto v = getByteVectorFromFile(file).unwrap();
			_tex.loadFromMemory(v.data(), v.size());
			_sprite.setTexture(_tex);
			_sprite.setOrigin(this->getSize() / 2);
		}
		catch(std::exception & e){
			std::cout << "Sprite::Sprite " << e.what();
			throw;
		}
	}
	inline ::sf::Sprite Sprite::getSfSprite() const noexcept{
		return _sprite;
	}

	inline Sprite & Sprite::setPosition(Vec2 const & p) noexcept{
		_sprite.setPosition(p.x, p.y);
		return *this;
	}
	inline Sprite & Sprite::setOrigin(Vec2 const & v) noexcept{
		_sprite.setOrigin(v.x, v.y);
		return *this;
	}
	inline Sprite & Sprite::rotate(sh::priv::degree_t<float> const & v) noexcept{
		_sprite.rotate(v.value);
		return *this;
	}
	inline Sprite & Sprite::rotate(sh::priv::radian_t<float> const & v) noexcept{
		_sprite.rotate(v.value);
		return *this;
	}
	inline Sprite & Sprite::setRotation(sh::priv::degree_t<float> const & v) noexcept{
		_sprite.setRotation(v.value);
		return *this;
	}
	inline Vec2 Sprite::getPosition() const noexcept{
		return {
			_sprite.getPosition().x, 
			_sprite.getPosition().y
		};
	}
	inline Vec2 Sprite::getCenter() const noexcept{
		return {
			_sprite.getPosition().x + (_tex.getSize().x / 2),
			_sprite.getPosition().y + (_tex.getSize().y / 2)
		};
	}
	inline Vec2 Sprite::getSize() const noexcept{
		return {
			static_cast<float>(_tex.getSize().x),
			static_cast<float>(_tex.getSize().y)
		};
	}
}