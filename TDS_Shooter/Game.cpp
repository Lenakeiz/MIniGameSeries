#include "Game.h"

const sf::Time Game::TimePerFrame = sf::seconds(1.0f / 60.0f);

Game::Game()
: mWindow(sf::VideoMode(640, 480), "Game Window", sf::Style::Close),
mInputHandler()
{
}

void Game::initialize()
{
	//TODO change  this initialization, need to create a pointer to object than deferencing it in order to copy in private member;
	try
	{
		mTextures.load(Textures::ID::Airplane, "Assets/Textures/Eagle.png");
	}
	catch (std::runtime_error& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	GameObjectModel* om = new GameObjectModel(mTextures.get(Textures::ID::Airplane));
	mObjectModel = *om;

	mPLayer = Player(mObjectModel);
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpddate = sf::Time::Zero;
	while (mWindow.isOpen())
	{
		sf::Time elapsedTime = clock.restart();
		timeSinceLastUpddate += elapsedTime;
		//Fixed Delta Time
		while (timeSinceLastUpddate > TimePerFrame)
		{
			timeSinceLastUpddate -= TimePerFrame;
			
			processEvents();
			update(TimePerFrame);
		}
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (mWindow.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			mWindow.close();
			break;
		default:
			break;
		}
	}
}

void Game::update(sf::Time deltaTime)
{

}

void Game::render()
{
	mWindow.clear();
	mWindow.draw(mPLayer.GetDrawable());
	mWindow.display();

}

Game::~Game()
{
}
