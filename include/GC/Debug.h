#pragma once
#include <iomanip>
#include <sstream>
#include <list>
#include "SFML/Graphics.hpp"
#include "SFML/System/String.hpp"
#include "Utils.h"
#include "Settings.h"

namespace gc{
	namespace priv{
		template<class T> 
		inline void _user_write(sf::String & str, const T & t){
			str += std::to_string(t).data();
		}
		template<size_t Size>
		inline void _user_write(sf::String & str, const char (& c_str)[Size]){
			str += c_str;
		}
		class Debug{
			using this_string = sf::String;
			std::list<this_string> _text;
			sf::Font _font;
			std::vector<u8> _font_data;
		private:
			inline void _try_clear();
			void _newLine();
			this_string & _getCurrent();
			template<class T> void _write(const T &);
			template<class T, class Y, class ... Args> void _write(const T &, const Y &, const Args & ...);
		public:
			Debug(c_string path);
			template<class T> void dump(const T & t);

			template<class T, class Y, class ... Args> 
			Debug & log(const T &, const Y &, const Args & ...);
			template<class T> 
			Debug & log(const T &);
			Debug & log();

			const sf::Text getSFText() const;
			const sf::String getSFString() const;
		};
		inline Debug::Debug(c_string path):
			_text(GC_DEBUG_MAX_LINES_COUNT), _font_data(getByteVectorFromFile(path).unwrap())
		{
			_font.loadFromMemory(_font_data.data(), _font_data.size());
		}
		//called once before we write things
		inline void Debug::_try_clear(){
			if (_text.size() == GC_DEBUG_MAX_LINES_COUNT)
				_text.pop_front();
		}
		inline void Debug::_newLine(){
			_getCurrent() += '\n';
			_text.emplace_back();
		}
		inline Debug::this_string & Debug::_getCurrent(){
			return _text.back();
		}
		template<class T>
		void Debug::_write(const T & t){
			_user_write(_getCurrent(), t);
		}
		template<class T, class Y, class ... Args>
		void Debug::_write(const T & t, const Y & y, const Args & ... args){
			_user_write(_getCurrent(), t);
			_write(y, args ...);
		}
		inline Debug & Debug::log(){
			_try_clear();
			_newLine();
			return *this;
		}
		template<class T>
		Debug & Debug::log(const T & t){
			_try_clear();
			_write(t);
			_newLine();
			return *this;
		}
		template<class T, class Y, class ... Args> 
		Debug & Debug::log(const T & t, const Y & y, const Args & ... args){
			_try_clear();
			_write(t);
			_write(y, args ...);
			_newLine();
			return *this;
		}
		inline const sf::Text Debug::getSFText() const{			
			sf::String resultedString;

			for (const auto & i : _text)
				resultedString += i;

			sf::Text result;
			result.setString(resultedString);
			result.setFont(_font);
			result.setOutlineColor(sf::Color::White);
			result.setCharacterSize(20);
			result.setPosition(-400, -300);
			return result;
		}
		inline const sf::String Debug::getSFString() const{
			this_string res;
			for (const auto & i : _text){
				res += i;
			}
			return res;
		}
	}
	#define GC_SPECIALIZE_DEBUG_LOG(_arg_type) template<> inline void ::gc::priv::_user_write(sf::String & str, _arg_type)
	extern priv::Debug debug;
}//namespace gc