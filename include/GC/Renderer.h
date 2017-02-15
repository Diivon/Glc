#pragma once
#include "GC/Camera.h"
#include "GC/Sprite.h"
#include "SFML/Graphics/RenderWindow.hpp"

namespace gc
{
	class Renderer : public ClassTraits<Renderer>
	{
		Camera * _cam;
		::sf::RenderWindow * _win;
	public:
		inline this_t() noexcept;
		inline lref_t setCamera(Camera &) noexcept;
		inline lref_t setWindow(::sf::RenderWindow &) noexcept;
		inline c_lref_t render(Sprite::c_lref_t) const noexcept;
		template<class T>
		inline void renderScene(const T &);
		template<class T>
		inline void renderLayer(const T &);
		inline c_lref_t show() const noexcept;
	};
	Renderer::Renderer() noexcept:
		_cam(nullptr), _win(nullptr)
	{}
	Renderer::lref_t Renderer::setCamera(Camera & a) noexcept{
		_cam = &a;
		if (_win)
			_win->setView(_cam->_view);
		return *this;
	}
	Renderer::lref_t Renderer::setWindow(::sf::RenderWindow & a) noexcept{
		_win = &a;
		if (_cam)
			_win->setView(_cam->_view);
		return *this;
	}
	Renderer::c_lref_t Renderer::render(Sprite::c_lref_t s) const noexcept{
		auto spr = s.getSfSprite();
		spr.setPosition(s.getPosition().x, s.getPosition().y);
		_win->draw(spr);
		return *this;
	}
	Renderer::c_lref_t Renderer::show() const noexcept{
		_win->display();
		return *this;
	}
}