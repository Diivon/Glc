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
#include "Scene0-EnemyLayer.h"
#include "Scene0-ObjectsLayer.h"
class Scene0 : public ::gc::TypeAliases<Scene0>{
	EnemyLayer layerObject1;
	ObjectsLayer layerObject0;
	gc::Renderer * _rend;
	public:
	gc::Renderer & getRenderer(){return *_rend;}
		void setRenderer(gc::Renderer & r){_rend = &r;}
			Scene0()
			:
			layerObject1(*this), layerObject0(*this)
			{}
				void start()
				{
					layerObject1.onStart();
					layerObject0.onStart();
				}
				void update(const float & dt)
				{
					layerObject1.onUpdate(dt);
					layerObject0.onUpdate(dt);
				}
				template<class T>
				T & getLayer();
				template<class T>
				const T & getLayer() const;
				template<>
				EnemyLayer & getLayer(){
					return layerObject1;
				}
				template<>
				const EnemyLayer & getLayer() const{
					return layerObject1;
				}
				template<>
				ObjectsLayer & getLayer(){
					return layerObject0;
				}
				template<>
				const ObjectsLayer & getLayer() const{
					return layerObject0;
				}
			};
			template<>
			inline void ::gc::Renderer::renderScene(const Scene0 & s){
				this->renderLayer(s.getLayer<EnemyLayer>());
				this->renderLayer(s.getLayer<ObjectsLayer>());
			}
