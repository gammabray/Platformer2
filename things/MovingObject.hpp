#ifndef MOVINGOBJECT_HPP
#define MOVINGOBJECT_HPP
#include "GameObject.hpp"
#include <vector>
namespace Game {
	class MovingObject :
		public GameObject
	{
	protected:
		sf::Vector2f velocity;
		MovingObject(sf::Vector2f startPos, sf::Vector2f velocity ,std::string spriteFilePath);
	public:		
		virtual void Update(float deltaT) = 0;
	};


}

#endif // !ANIMATEDOBJECT_HPP

