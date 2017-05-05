#pragma once
#include <iomanip>
#include <sstream>
#include "Utils.h"
#include "SFML/Graphics.hpp"

namespace gc{
	namespace priv{
		class Debug: public ClassTraits<Debug>{
			static const sf::Font _font;
			template<class T, class Y, class ... Args>
			inline void _write_helper(T && t, Y && y, Args && ... args);
			template<class T>
			inline void _write_helper(T && t);
			inline lref_t _write(const char * const);
			inline lref_t _write(bool);
			inline lref_t _write(char);
			inline lref_t _write(float);
			inline lref_t _write(int);
			inline lref_t _write(const gc::Vec2 &);
			inline void _try_clear();
		public:
			std::string _text;
			template<class T, class ... Args>
			inline lref_t write(T && t, Args && ...);
			inline lref_t clear();
			inline lref_t newLine();
			inline const sf::Text getSFText() const;
			template<class T>
			void dump(const T & t){
				print("type: ", TypeName<T>::get(), ", value: ", t);
			}
		};
		template<class T, class ... Args>
		inline Debug::lref_t Debug::write (T && t, Args && ... args){
			_write_helper(std::forward<T>(t), std::forward<Args>(args)...);
			return *this;
		}
		template<class T, class Y, class ... Args>
		inline void Debug::_write_helper(T && t, Y && y, Args && ... args){
			_write(std::forward<T>(t));
			_write_helper(std::forward<Y>(y), std::forward<Args>(args)...);
		}
		template<class T>
		inline void Debug::_write_helper(T && t){
			_write(std::forward<T>(t));
		}
		inline Debug::lref_t Debug::_write (bool b){
			if (b)
				_text += "true";
			else _text += "false";
			return *this;
		}
		inline void Debug::_try_clear (){
			if (_text.size() > 50)
				_text.clear();
		}
		inline Debug::lref_t Debug::_write (const char * const s){
			_try_clear();
			_text += s;
			return *this;
		}
		inline Debug::lref_t Debug::_write (char s){
			_try_clear();
			_text += s;
			return *this;
		}
		inline Debug::lref_t Debug::_write (float s){
			_try_clear();
			std::stringstream stream;
			stream << std::fixed << std::setprecision(2) << s;
			_text += stream.str();
			return *this;
		}
		inline Debug::lref_t Debug::_write (int s){
			_try_clear();
			_text += std::to_string(s);
			return *this;
		}
		inline Debug::lref_t Debug::_write(const gc::Vec2 & v){
			_try_clear();
			_text += '{';
			_text += std::to_string(v.x);
			_text += ' ';
			_text += std::to_string(v.y);
			_text += '}';
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
	extern priv::Debug debug;
}//namespace gc