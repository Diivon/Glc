#pragma once
/*
	gc/Camera provides Class for Camera object
	Nearest analog is camera from our real world,
	actually it is viewport, which limited visible part of scene
*/
#include "Vec2.h"
#include "Debug.h"
#include <SFML/Graphics.hpp>
namespace gc
{
	class Camera
	{
		::sf::View _view;
		friend class Renderer;
	public:
		inline Camera() noexcept;
		inline Camera(const Vec2 & pos, const Vec2 & size) noexcept;
		inline Camera & moveTo(float x, float y) noexcept;		//set
		inline Camera & moveTo(const Vec2 & pos) noexcept;		//set
		inline Camera & moveOn(float dx, float dy) noexcept;	//change
		inline Camera & moveOn(const Vec2 & dp) noexcept;
		inline Camera & setSize(float w, float h) noexcept;		//set
		inline Camera & setSize(const Vec2 & size) noexcept;
		inline Camera & changeSize(float dw, float dh) noexcept;//change
		inline Camera & changeSize(const Vec2 & ds) noexcept;
		inline Camera & setRotation(float r) noexcept;			//set
		inline Camera & rotate(float dr) noexcept;				//change
		inline Camera & zoom(float z) noexcept;					//change (deprecated)		
		
		//getters
		inline Vec2 getPosition() const noexcept;
		inline Vec2 getCenter() const noexcept;
		inline Vec2 getSize() const noexcept;
		inline const float getRotation() const noexcept;
	};
	/*----------------------------------------------IMPLEMENTATION--------------------------------------------*/
#pragma region GC_CAMERA
	inline Camera::Camera() noexcept :
		_view()
	{}
	inline Camera::Camera(const Vec2 & pos, const Vec2 & size) noexcept :
		_view(pos, size)
	{}
	inline Camera & Camera::moveTo(float x, float y) noexcept {
		_view.setCenter(x, y);
		return *this;
	}

	inline Camera & Camera::moveTo(const Vec2 & pos) noexcept {
		_view.setCenter(pos);
		return *this;
	}

	inline Camera & Camera::moveOn(float dx, float dy) noexcept {
		_view.move(dx, dy);
		return *this;
	}

	inline Camera & Camera::moveOn(const Vec2 & dp) noexcept {
		_view.move(dp);
		return *this;
	}

	inline Camera & Camera::setSize(float w, float h) noexcept {
		_view.setSize(w, h);
		return *this;
	}

	inline Camera & Camera::setSize(const Vec2 & size) noexcept {
		_view.setSize(size);
		return *this;
	}

	inline Camera & Camera::changeSize(float dw, float dh) noexcept {
		auto size = _view.getSize();
		_view.setSize(size.x + dw, size.y + dh);
		return *this;
	}

	inline Camera & Camera::changeSize(const Vec2 & ds) noexcept {
		auto size = _view.getSize();
		_view.setSize(size.x + ds.x, size.y + ds.y);
		return *this;
	}

	inline Camera & Camera::setRotation(float r) noexcept {
		_view.setRotation(r);
		return *this;
	}

	inline Camera & Camera::rotate(float dr) noexcept {
		_view.rotate(dr);
		return *this;
	}

	inline Camera & Camera::zoom(float z) noexcept {
		_view.zoom(z);
	}

	inline Vec2 Camera::getPosition() const noexcept {
		Vec2 center = _view.getCenter();
		Vec2 halfSize = _view.getSize();
		halfSize.x /= 2;
		halfSize.y /= 2;
		Vec2 result;
		result.x = center.x - halfSize.x;
		result.y = center.y - halfSize.y;
		return result;
	}

	inline Vec2 Camera::getCenter() const noexcept {
		return _view.getCenter();
	}

	inline Vec2 Camera::getSize() const noexcept {
		return _view.getSize();
	}

	inline const float Camera::getRotation() const noexcept {
		return _view.getRotation();
	}

#pragma endregion
}