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
const gc::Vec2 gc::Vec2::zero{0, 0};
	gc::priv::Debug gc::debug{ R"(resources\DebugFont.ttf)" };
		gc::priv::printer gc::print;
		gc::priv::printLiner gc::println;
		const gc::Event<gc::Vec2> gc::Mouse::onMove;
		const gc::Event<gc::Mouse::Button> gc::Mouse::onButtonPressed;
		const gc::Event<gc::Keyboard::Key> gc::Keyboard::onKeyPressed;
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
				mainWindow.draw(gc::debug.getSFText());
				renderer.show();
				dt = clock.getElapsedTime().asMilliseconds();
				if (dt < c_MillisecondsForOneFrame) sf::sleep(sf::milliseconds(static_cast<sf::Int32>(c_MillisecondsForOneFrame - dt)));
			}
		}
