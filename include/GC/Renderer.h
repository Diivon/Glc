#pragma once
#include "GC/Camera.h"
#include "GC/Sprite.h"
#include "SFML/Graphics/RenderWindow.hpp"

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
		template<class T>
		inline const Renderer & render(T const &) const noexcept;
		inline const Renderer & render(Sprite const &, Vec2 const &) const noexcept;
		template<class T>
		inline void renderScene(const T &);
		template<class T>
		inline void renderLayer(const T &);
		inline const Renderer & show() const noexcept;
	};
	inline Renderer::Renderer() noexcept:
		_cam(nullptr), _win(nullptr)
	{}
	inline Renderer & Renderer::setCamera(Camera & a) noexcept{
		_cam = &a;
		if (_win)
			_win->setView(_cam->_view);
		return *this;
	}
	inline Renderer & Renderer::setWindow(::sf::RenderWindow & a) noexcept{
		_win = &a;
		if (_cam)
			_win->setView(_cam->_view);
		return *this;
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
	inline Renderer const & Renderer::show() const noexcept{
		_win->display();
		return *this;
	}
}