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
#include "Scene0-Layer1.h"
class Scene0 : public ::gc::TypeAliases<Scene0>{
	Layer0 layerObject0;
	Layer1 layerObject1;
	public:
	Scene0()
	:
	layerObject0(*this), layerObject1(*this)
	{}
		void start()
		{
			layerObject0.onStart();
			layerObject1.onStart();
		}
		void update(const float & dt)
		{
			layerObject0.onUpdate(dt);
			layerObject1.onUpdate(dt);
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
		template<>
		Layer1 & getLayer(){
			return layerObject1;
		}
		template<>
		const Layer1 & getLayer() const{
			return layerObject1;
		}
	};
	template<>
	inline void ::gc::Renderer::renderScene(const Scene0 & s){
		this->renderLayer(s.getLayer<Layer0>());
		this->renderLayer(s.getLayer<Layer1>());
	}
