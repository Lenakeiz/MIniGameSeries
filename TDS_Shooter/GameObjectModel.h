#pragma once
#include <SFML/Graphics.hpp>

class GameObjectModel
{
public:
	GameObjectModel();
	GameObjectModel(const std::string& filename);
	GameObjectModel(const sf::Texture& texture);
	const sf::Texture& getTexture() const;
	const sf::Sprite& getSprite() const;

	~GameObjectModel();
private:
	sf::Texture mTexture;
	sf::Sprite mSprite;
};

