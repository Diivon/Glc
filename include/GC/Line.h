#pragma once
#include "SFML/Graphics/Vertex.hpp"
#include "Vec2.h"
#include "SemanticHelpers.h"
#include "Color.h"

namespace gc{
	struct Line{
		size_t _thickness;
		gc::Vec2 _data[2];//begin, end
		gc::Color _color;

		friend class Renderer;
	public:
		Line();
		Line & setBegin(gc::Vec2 const & v);
		Line & setEnd(gc::Vec2 const & v);
		Line & setColor(gc::Color const & c);
		Line & setThickness(size_t val);
		float getLength() const noexcept;
	};
	inline Line::Line():
		_thickness(1)
	{}
	inline Line & Line::setBegin(gc::Vec2 const & v){
		_data[0] = v;
		return *this;
	}
	inline Line & Line::setEnd(gc::Vec2 const & v){
		_data[1] = v;
		return *this;
	}
	inline Line & Line::setColor(gc::Color const & c){
		_color = c;
		return *this;
	}
	inline Line & Line::setThickness(size_t val){
		_thickness = val;
		return *this;
	}
	inline float Line::getLength() const noexcept{
		auto v = _data[1] - _data[0];
		return v.getLength();
	}
}