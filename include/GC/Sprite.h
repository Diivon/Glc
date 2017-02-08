#pragma once

#include <string>
#include "GC/Utils.h"
#include "SFML/Graphics.hpp"
namespace gc
{
	class Sprite : ClassTraits<Sprite>
	{
		sf::Texture _tex;
		sf::Sprite _sprite;
	public:
		Sprite(const std::string & fileName);
		Sprite(c_lref_t);
		c_lref_t operator = (c_lref_t);

		#ifdef SFML_SPRITE_HPP
			operator sf::Sprite();
			Sprite(const sf:: Sprite &);
			c_lref_t operator = (const sf::Sprite &);
		#endif
	};
		Sprite::Sprite(const std::string & file){
			_tex.loadFromFile(file);
			_sprite.setTexture(_tex);
		}
		Sprite::Sprite(Sprite::c_lref_t a):
			_tex(a._tex), _sprite(a._sprite)
		{}
		Sprite::c_lref_t Sprite::operator = (Sprite::c_lref_t a){
			_tex = a._tex;
			_sprite = a._sprite;
		}
		#ifdef SFML_SPRITE_HPP
			Sprite::operator sf::Sprite(){
				return sf::Sprite(_tex)
			}
			Sprite::Sprite(const sf::Sprite & a):
				_tex(*a.getTexture()), _sprite(_tex)
			{}
			Sprite::c_lref_t Sprite::operator = (const sf::Sprite & a){
				_tex = *a.getTexture();
				_sprite = sf::Sprite(_tex);
			}
		#endif

}