#include <SFML/Graphics.hpp>


using namespace sf;
int main()
{
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "Timber!!!", Style::Default);
	
	Texture textureBackground;
	textureBackground.loadFromFile("graphics/background.png");
	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);


	// ======================== game loop ===========================
	while (window.isOpen()){
		Event event;
		while (window.pollEvent(event)){
			if (event.type == Event::Closed) {
				window.close();
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::F11)) {
			
		}

		window.clear();
		window.draw(spriteBackground);
		window.display();
	}

	return 0;
}