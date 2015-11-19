#pragma once

///This class will be used as an interface to implement the

class Command
{
public:

	virtual void execute() = 0;

	virtual ~Command()
	{
	}
};


