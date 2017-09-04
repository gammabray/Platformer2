#include "MovingObject.hpp"


namespace Game {
	MovingObject::MovingObject(sf::Vector2f startPos, sf::Vector2f velocity, std::string spriteFilePath) : GameObject(startPos,spriteFilePath), velocity(velocity)
	{
	}


	
}

