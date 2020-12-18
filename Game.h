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
	void _moveCube(Stack& s1, Stack& s2);
	void _move(unsigned start, unsigned end, Stack& source, Stack& target, Stack& spare, unsigned depth);

};

