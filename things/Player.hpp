#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "MovingObject.hpp"
#include "IAnimated.hpp"
namespace Game {
	class Player :
		public MovingObject, IAnimated
	{
	protected:
		static const float horizontalSpeed , verticalSpeed;
	public:
		void Update(float deltaT) override;
		Player(sf::Vector2f startPos);
		
	};
}
#endif


