#pragma once
#include <iomanip>
#include <sstream>

#include "GC/Utils.h"
#include "SFML/Graphics.hpp"
namespace gc{
	namespace priv{
		class Debug: public ClassTraits<Debug>{
			std::string _text;
			static const sf::Font _font;

		public:
			inline lref_t write(const char * const);
			inline lref_t write(bool);
			inline lref_t write(char);
			inline lref_t write(float);
			inline lref_t write(int);
			inline lref_t clear();
			inline lref_t newLine();
			inline const sf::Text getSFText() const;
		};
		inline Debug::lref_t Debug::write (bool b){
			if (b)
				_text += "true";
			else _text += "false";
			return *this;
		}
		inline Debug::lref_t Debug::write (const char * const s){
			if (_text.size() > 50)
				_text.clear();
			_text += s;
			return *this;
		}
		inline Debug::lref_t Debug::write (char s){
			if (_text.size() > 50)
				_text.clear();
			_text += s;
			return *this;
		}
		inline Debug::lref_t Debug::write (float s){
			if (_text.size() > 50)
				_text.clear();
			std::stringstream stream;
			stream << std::fixed << std::setprecision(2) << s;
			_text += stream.str();
			return *this;
		}
		inline Debug::lref_t Debug::write (int s){
			if (_text.size() > 50)
				_text.clear();
			_text += std::to_string(s);
			return *this;
		}
		inline Debug::lref_t Debug::clear(){
			_text.clear(); 
			return *this;
		}
		inline Debug::lref_t Debug::newLine(){
			_text += '\n'; 
			return *this;
		}
		inline const sf::Text Debug::getSFText() const{
			sf::Text result;
			result.setString(_text);
			result.setFont(_font);
			result.setOutlineColor(sf::Color::White);
			result.setCharacterSize(20);
			result.setPosition(-400, -300);
			return result;
		}
	}
	namespace debug {
		extern priv::Debug log;
	}
}//namespace gc