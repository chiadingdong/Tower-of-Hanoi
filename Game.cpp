#include "Game.h"

void Game::solve() {

}
//Initially all the cubes at first pile->stack[0]
Game::Game(){
	Stack stackcube;
	for (int i = 0; i < 3; ++i)		//create 3 stacks(stacks_.size()=3)
		stacks_.push_back(stackcube);

	//Create 4 cubes,placing the cubes on first stack
	Cube blue(4, Color::blue);
	stacks_[0].pushback(blue); 
	Cube orange(3, Color::orange);
	stacks_[0].pushback(orange);
	Cube purple(2, Color::purple);
	stacks_[0].pushback(purple);
	Cube yellow(1, Color::yellow);
	stacks_[0].pushback(yellow);
	//stacks_[1].pushback(Cube{ 9,Color::grey });
}

std::ostream& operator<<(std::ostream &os, const Game& game) {
	for (int i = 0; i < game.stacks_.size(); ++i)
		os << "Stack[" << i << "]: " << game.stacks_[i];
	return os;
}
