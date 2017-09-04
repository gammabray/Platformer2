#include <SFML\Graphics.hpp>

#include "Player.hpp"
int main() {
	sf::RenderWindow rw(sf::VideoMode(1280, 720), "wassup");
	rw.setFramerateLimit(60);
	sf::Event event;
	Game::Player obj(sf::Vector2f(640,360));
	sf::Clock clock;
	int delta;
	while (rw.isOpen()) {
		delta = clock.restart().asMilliseconds();
		rw.pollEvent(event);
		if (event.type == sf::Event::Closed) {
			rw.close();			
		}
		obj.Update(delta);
		rw.clear();
		rw.draw(obj);
		rw.display();
		
		

	}
}
