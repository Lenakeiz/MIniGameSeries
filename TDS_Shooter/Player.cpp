#include "Player.h"

Player::Player()
{
}

Player::Player(GameObjectModel& _model)
{
	mOBjectModel = &_model;
}

const sf::Sprite& Player::GetDrawable() const
{
	return mOBjectModel->getSprite();
}


Player::~Player()
{
}
