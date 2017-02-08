#pragma once

#include "SFML/Audio.hpp"
#include <string>
namespace gc
{
	class Sound
	{
		sf::SoundBuffer _buf;
		sf::Sound _snd;
	public:
		Sound(const std::string & file){
			_buf.loadFromFile(file);
			_snd.setBuffer(_buf);
		}
		~Sound(){}
		void play(){
			_snd.play();
		}
		void pause(){
			_snd.pause();
		}
		void stop(){
			_snd.stop();
		}
	};
}//ns gc