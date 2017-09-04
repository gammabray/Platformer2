#include "Player.hpp"


namespace Game {
	//Static declarations
	const float Game::Player::horizontalSpeed = 0.4f;
	const float Game::Player::verticalSpeed   = 0.0f;

	Player::Player(sf::Vector2f startPos) : MovingObject(startPos,sf::Vector2f(horizontalSpeed,verticalSpeed) ,"Assets\\robot.png")
	{

	}
	void Player::Update(float deltaT)
	{
		//Modify objects position
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			this->position += sf::Vector2f(deltaT * velocity.x,0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			this->position += sf::Vector2f(deltaT * -velocity.x, 0);
		}

		
		//Update position of actual sprite
		sprite.setPosition(this->position);
	}
}
