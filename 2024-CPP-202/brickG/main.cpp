#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void main(void) {
	RenderWindow window(VideoMode(1600, 1000), "shootingG");
	
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) { 
			if (event.type == sf::Event::Closed)
				window.close();
		} // while
		RectangleShape player;
		player.setSize(Vector2f(181.f, 75.f));  // 너비 높이 2-->2차원, f-->float
		player.setFillColor(Color::Blue);
		player.setPosition(500.f, 400.f);

		window.clear();
		window.draw(player);
		window.display();
	} // while
} // main