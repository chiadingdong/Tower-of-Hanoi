#pragma once

#include "Stack.h"

class Game
{
public:
	Game();
	void solve();
	//overload to print game object
	friend std::ostream& operator<<(std::ostream &,const Game& );

private:
	std::vector<Stack> stacks_;	
	//each stacks_ element(a Stack object) contains a vector of Cube 
	//e.g 3 stack objects, each contain a vector of elements of type Cube
};

