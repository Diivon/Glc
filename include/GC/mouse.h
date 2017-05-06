#pragma once
#include "Vec2.h"
#include "Numerics.h"
#include "Event.h"
#include "Camera.h"
#include "SFML/Window/Mouse.hpp"
#include "SFML/Window.hpp"

/*
if (gc::Mouse::isKeyPressed(gc::Mouse::Key::LKM))
	self.shoot( (gc::Mouse::getPosition() - self.getPosition()).normalize()  );


void onStart(){
	gc::Mouse::onMoveEvent.sign([](const gc::Vec2 & pos){
		self.moveTo(pos);
	});
}
*/

namespace gc{
	class Mouse{
		Mouse() = delete;
		Mouse(Mouse const &) = delete;
		Mouse(Mouse &&) = delete;
		void operator = (Mouse const &) = delete;
		void operator = (Mouse &&) = delete;
		~Mouse() = delete;
		static sf::RenderWindow * _win;
		static gc::Camera * _cam;
	public:
		enum class Button{
			Left,
			Right,
			Middle,
			XButton1,
			XButton2
		};
		static Vec2 getWindowPosition() noexcept;
		static Vec2 getWorldPosition() noexcept;
		static Bool isButtonPressed(Button) noexcept;
		static const Event<Button> onButtonPressed;
		static const Event<Vec2> onMove;
	};
	inline Vec2 Mouse::getWindowPosition() noexcept{
		auto res = sf::Mouse::getPosition(*_win);
		return Vec2(static_cast<float>(res.x), static_cast<float>(res.y));
	}
	inline Vec2 Mouse::getWorldPosition() noexcept{
		auto res = sf::Mouse::getPosition(*_win);
		return Vec2(static_cast<float>(res.x), static_cast<float>(res.y)) - _cam->getPosition();
	}	
	inline Bool Mouse::isButtonPressed(Button butt) noexcept{
		return sf::Mouse::isButtonPressed(static_cast<sf::Mouse::Button>(butt));
	}
}