#pragma once
#include "Camera.h"
#include "Sprite.h"
#include "Line.h"
#include "Utils.h"
#include "Print.h"
#include "SFML/Graphics/RenderWindow.hpp"
#include <cstdint>

namespace gc
{
	class Renderer
	{
		Camera * _cam;
		::sf::RenderWindow * _win;
	public:
		inline Renderer() noexcept;
		inline Renderer & setCamera(Camera &) noexcept;
		inline Renderer & setWindow(::sf::RenderWindow &) noexcept;
		inline Camera & getCamera() noexcept;

		template<class T>
		inline const Renderer & render(T const &) const noexcept;
		inline const Renderer & render(Sprite const & sprite, Vec2 const & pos) const noexcept;
		inline const Renderer & render(Line const & line) const noexcept;
		template<class T>
		inline void renderScene(const T &);
		template<class T>
		inline void renderLayer(const T &);
		inline const Renderer & show() const noexcept;
	};
	inline Renderer::Renderer() noexcept:
		_cam(nullptr), _win(nullptr)
	{}
	inline Renderer & Renderer::setWindow(::sf::RenderWindow & a) noexcept{
		_win = &a;
		return *this;
	}
	inline Renderer & Renderer::setCamera(Camera & a) noexcept{
		_cam = &a;
		return *this;
	}

	inline Camera & Renderer::getCamera() noexcept{
		return *_cam;
	}
	
	template<class T>
	inline const Renderer & Renderer::render(T const & t) const noexcept{
		_win->draw(t);
		return *this;
	}
	inline Renderer const & Renderer::render(Sprite const & s, Vec2 const & pos) const noexcept{
		auto spr = s.getSfSprite();
		spr.setPosition(pos.x, pos.y);
		_win->draw(spr);
		return *this;
	}
	inline const Renderer & Renderer::render(Line const & line) const noexcept{
		if(line._thickness == 0)
			return *this;
		if(line._thickness == 1){
			sf::Vertex l[] = {
				sf::Vertex(line._data[0], line._color),
				sf::Vertex(line._data[1], line._color)
			};
			_win->draw(l, 2, sf::LinesStrip);
		}
		else{
			auto dir = line._data[1] - line._data[0];
			auto deg = gc::toDegree(acos(dir.getNormalized().x));
			if (dir.y < 0)
				deg.value *= -1;
			sf::RectangleShape l(sf::Vector2f(dir.getLength(), (float)line._thickness));
			l.rotate(deg.value);
			l.setOutlineThickness(0);
			l.setFillColor(line._color);
			l.setPosition(line._data[0]);
			this->render(l);
		}
		return *this;
	}
	inline Renderer const & Renderer::show() const noexcept{
		_win->display();
		return *this;
	}
}