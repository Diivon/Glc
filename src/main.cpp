#include "main.h"
inline void processEvents(sf::RenderWindow & w){
	sf::Event event;
	while (w.pollEvent(event)) {
		if (event.type == sf::Event::Closed){
			w.close(); continue;
		}
		if (event.type == sf::Event::KeyPressed)
		if (event.key.code == sf::Keyboard::Escape)
		w.close();
	}
}
const int c_framesPerSecond = 30;
const float c_MillisecondsForOneFrame = 1'000 / c_framesPerSecond;
const gc::Vec2 gc::Vec2::zero = gc::Vec2(0, 0);
const sf::Font gc::priv::Debug::_font = ([](){sf::Font f;f.loadFromFile(R"(resources\DebugFont.ttf)"); return f;})();
	gc::priv::Debug gc::debug::log = gc::priv::Debug();
	int main(){
		sf::RenderWindow mainWindow(sf::VideoMode(800,600), "sfml", sf::Style::Close);
		gc::Camera mainCamera(gc::Vec2(0, 0), gc::Vec2(800,600));
		gc::Renderer renderer;
		renderer.setWindow(mainWindow).setCamera(mainCamera);
		float dt = 0.5f;
		auto & currentScene = Scene0();
		currentScene.start();
		sf::Clock clock;
		while(mainWindow.isOpen()){
			clock.restart();
			processEvents(mainWindow);
			mainWindow.clear();
			currentScene.update(c_MillisecondsForOneFrame);
			renderer.renderScene(currentScene);
			mainWindow.draw(gc::debug::log.getSFText());
			renderer.show();
			dt = clock.getElapsedTime().asMilliseconds();
			if (dt < c_MillisecondsForOneFrame) sf::sleep(sf::milliseconds(static_cast<sf::Int32>(c_MillisecondsForOneFrame - dt)));
		}
	}
