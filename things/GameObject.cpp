#include "GameObject.hpp"
#include <iostream>

namespace Game {
	GameObject::GameObject(sf::Vector2f position,std::string spriteFilePath) : position(position)
	{
		texture = std::make_unique<sf::Texture>();
		if (!texture->loadFromFile(spriteFilePath)) {
			std::cout << "Failed to load texture of a GameObject.\n";
		}
		else {
			sprite.setTexture(*texture,true);
		}
		
		sprite.setPosition(position);

	}

	void GameObject::draw(sf::RenderTarget & target, sf::RenderStates states) const
	{
		target.draw(sprite, states);
	}

}
