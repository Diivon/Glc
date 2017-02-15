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
		inline Sound(const std::string & file);
		inline void play();
		inline void pause();
		inline void stop();
	};
		Sound::Sound(const std::string & file){
			_buf.loadFromFile(file);
			_snd.setBuffer(_buf);
		}
		void Sound::play(){
			_snd.play();
		}
		void Sound::pause(){
			_snd.pause();
		}
		void Sound::stop(){
			_snd.stop();
		}
}//ns gc