#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>
#include "ResourceHolder.hpp"
#include "Player.h"
#include "InputHandler.h"

// Resource ID for sf::Texture
namespace Textures
{
	enum ID
	{
		Landscape,
		Airplane,
	};
}

//This class
class Game
{
public:
	Game();
	void initialize();
	void run();

	~Game();
private:
	void processEvents();
	void update(sf::Time deltaTime);
	void render();

private:
	static const sf::Time TimePerFrame;

	sf::RenderWindow mWindow;
	InputHandler mInputHandler;

	Player mPLayer;

	ResourceHolder<sf::Texture, Textures::ID> mTextures;

	GameObjectModel mObjectModel;
	
};


