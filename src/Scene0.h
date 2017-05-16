#pragma once
#include <string>
#include <iostream>
#include <utility>
#include "Glance.h"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"
#include <cmath>
#include "Scene0-Layer0.h"
class Scene0 : public ::gc::TypeAliases<Scene0>{
	Layer0 layerObject0;
	public:
	Scene0()
	:
	layerObject0(*this)
	{}
		void start()
		{
			layerObject0.onStart();
		}
		void update(const float & dt)
		{
			layerObject0.onUpdate(dt);
		}
		template<class T>
		T & getLayer();
		template<class T>
		const T & getLayer() const;
		template<>
		Layer0 & getLayer(){
			return layerObject0;
		}
		template<>
		const Layer0 & getLayer() const{
			return layerObject0;
		}
	};
	template<>
	inline void ::gc::Renderer::renderScene(const Scene0 & s){
		this->renderLayer(s.getLayer<Layer0>());
	}
