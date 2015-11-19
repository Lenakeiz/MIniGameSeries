#pragma once
#include <SFML/Graphics.hpp>
#include "Command.h"

//This class will elaborate a request, by giving an event

class InputHandler
{
public:
	InputHandler();

	Command* handleInput(const sf::Event& _keyEvent);

	~InputHandler();
private:
};

