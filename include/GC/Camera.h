#pragma once
#include "Vec2.h"
namespace gc
{
	class Camera : ClassTraits<Camera>
	{
		sf::View _view;
	public:
		Camera() noexcept;
		Camera(const Vec2 & pos, const Vec2 & size) noexcept;
		lref_t moveTo(float x, float y) noexcept;		//set
		lref_t moveTo(const Vec2 & pos) noexcept;		//set
		lref_t moveOn(float dx, float dy) noexcept;		//change
		lref_t moveOn(const Vec2 & dp) noexcept;
		lref_t setSize(float w, float h) noexcept;		//set
		lref_t setSize(const Vec2 & size) noexcept;
		lref_t changeSize(float dw, float dh) noexcept;	//change
		lref_t changeSize(const Vec2 & ds) noexcept;
		lref_t setRotation(float r) noexcept;			//set
		lref_t rotate(float dr) noexcept;				//change
		lref_t zoom(float z);							//change (deprecated)

		//getters
		Vec2::c_lref_t getPosition() const noexcept;
		Vec2::c_lref_t getSize() const noexcept;
		const float getRotation() const noexcept;
	};
	/*----------------------------------------------IMPLEMENTATION--------------------------------------------*/
#pragma region GC_CAMERA
	inline Camera::Camera() noexcept :
		_view()
	{}
	inline Camera::Camera(const Vec2 & pos, const Vec2 & size) noexcept :
		_view(pos, size)
	{}
	inline Camera::lref_t Camera::moveTo(float x, float y) noexcept {
		_view.setCenter(x, y);
		return *this;
	}

	inline Camera::lref_t Camera::moveTo(const Vec2 & pos) noexcept {
		_view.setCenter(pos);
		return *this;
	}

	inline Camera::lref_t Camera::moveOn(float dx, float dy) noexcept {
		_view.move(dx, dy);
		return *this;
	}

	inline Camera::lref_t Camera::moveOn(const Vec2 & dp) noexcept {
		_view.move(dp);
		return *this;
	}

	inline Camera::lref_t Camera::setSize(float w, float h) noexcept {
		_view.setSize(w, h);
		return *this;
	}

	inline Camera::lref_t Camera::setSize(const Vec2 & size) noexcept {
		_view.setSize(size);
		return *this;
	}

	inline Camera::lref_t Camera::changeSize(float dw, float dh) noexcept {
		_view.m_size.x += dw;
		_view.m_size.y += dh;
		return *this;
	}

	inline Camera::lref_t Camera::changeSize(const Vec2 & ds) noexcept {
		_view.m_size += ds;
		return *this;
	}

	inline Camera::lref_t Camera::setRotation(float r) noexcept {
		_view.setRotation(r);
		return *this;
	}

	inline Camera::lref_t Camera::rotate(float dr) noexcept {
		_view.rotate(dr);
		return *this;
	}

	inline Camera::lref_t Camera::zoom(float z) noexcept {
		_view.zoom(z);
	}

	inline Vec2::c_lref_t Camera::getPosition() const noexcept {
		return _view.getCenter();
	}

	inline Vec2::c_lref_t Camera::getSize() const noexcept {
		return _view.getSize();
	}

	inline const float Camera::getRotation() const noexcept {
		return _view.getRotation();
	}

#pragma endregion
}