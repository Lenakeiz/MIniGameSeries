#pragma once
#include "GameObjectModel.h"
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	Player(GameObjectModel& objectModel);

	const sf::Sprite& GetDrawable() const;

	~Player();

private:
	GameObjectModel* mOBjectModel;
};

