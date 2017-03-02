#pragma once
#include <random>
#include <ctime>
#include <GC/Utils.h>

namespace gc
{
	enum class Distribution{
		Normal,
		Float
	};
	namespace priv
	{
		
		template<class T, Distribution Y>
		struct getStdDistByGC {};
	
		template<>
		struct getStdDistByGC<float, Distribution::Float> {
			typedef std::uniform_real_distribution<float> type;
		};
	
		template<>
		struct getStdDistByGC<float, Distribution::Normal> {
			typedef std::normal_distribution<float> type;
		};
	
		template<>
		struct getStdDistByGC<int, Distribution::Float> {
			typedef std::uniform_int_distribution<int> type;
		};
	
		template<>
		struct getStdDistByGC<int, Distribution::Normal> {
			typedef std::normal_distribution<float> type;
		};
	}
	
	template<class T = float,Distribution Y = Distribution::Float, class E = std::mt19937>
	class Random {
	public:
		static inline T get(T l, T h) {
			static E engine(static_cast<unsigned int>(time(0)));
			static typename priv::getStdDistByGC<T, Y>::type dist(l, h);
			return static_cast<T>(dist(engine));
		}
	};
}