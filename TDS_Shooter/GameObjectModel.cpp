#include "GameObjectModel.h"


GameObjectModel::GameObjectModel()
{
	
}


GameObjectModel::GameObjectModel(const std::string& filename)
{
	if (!mTexture.loadFromFile(filename))
	{
		printf("Cannot load texture from file");
	}
	mSprite.setTexture(mTexture);
	mSprite.setPosition(100.0f, 100.0f);
}

GameObjectModel::GameObjectModel(const sf::Texture& texture)
{
	mSprite.setTexture(texture);
	mSprite.setPosition(100.0f, 100.0f);
}

const sf::Sprite& GameObjectModel::getSprite() const
{
	return mSprite;
}

const sf::Texture& GameObjectModel::getTexture() const
{
	return mTexture;
}

GameObjectModel::~GameObjectModel()
{
}
