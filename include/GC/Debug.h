#pragma once
#include "GC/Utils.h"
#include "SFML/Graphics.hpp"
namespace gc{
	namespace priv{
		class Debug: public ClassTraits<Debug>{
			std::string _text;
			static const sf::Font _font;
		public:
			inline lref_t operator << (const std::string &);
			inline const sf::Text getSFText() const;
		};
		inline Debug::lref_t Debug::operator << (const std::string & a){
			if (_text.size() > 50)
				_text.clear();
			_text += a;
			return *this;
		}
		inline const sf::Text Debug::getSFText() const{
			sf::Text result;
			result.setString(_text);
			result.setFont(_font);
			result.setColor(sf::Color::White);
			result.setCharacterSize(14);
			result.setPosition(-400, -300);
			return result;
		}
	}
	extern priv::Debug debug;
}//namespace gc