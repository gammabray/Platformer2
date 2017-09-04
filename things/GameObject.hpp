#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP
#include <SFML\Graphics.hpp>
#include <memory>
namespace Game {
	///<summary>
	///The base class for all entities in the game.
	///
	///Also see <see cref= "MovingObject"> </see> for objects with multiple animation states
	///</summary>
	class GameObject : 
		public sf::Drawable
	{
	protected:
		sf::Vector2f position;
		std::unique_ptr<sf::Texture> texture;
		sf::Sprite sprite;
		GameObject(sf::Vector2f position, std::string spriteFilePath);
	public:
		
		
		const sf::Vector2f& getPosition() { return position; }
		void setPosition(const sf::Vector2f newPosition) { position = newPosition; }

		// Inherited via sf::Drawable
		virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
	};
}



#endif // !GAMEOBJECT_HPP


