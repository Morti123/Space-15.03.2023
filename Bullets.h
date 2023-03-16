#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Player.h"

class Bullets {
private:sf::Texture texture;
	   sf::Sprite sprite;
	   float speed, speedx,speedy;
	   float angle;
public:
	Bullets(sf::Vector2f pos) {
		texture.loadFromFile(Missiles_File_Name);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
		speed = 0.f;
	}
	void update() {
		speed = 1.f;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		speed = 10.f;
		sprite.setRotation(angle);
		speedx = speed * cos(angle * PI / 180);
		speedy = -speed * sin(angle * PI / 180);
		sprite.move(speedx, speedy);
		}
	}
	sf::Sprite getSprite() { return sprite; }
};
