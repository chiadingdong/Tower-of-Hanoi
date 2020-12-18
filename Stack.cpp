#include "Stack.h"

void Stack::push_back(const Cube& cube) {
	// Ensure that we do not push a cube on top of a smaller cube:
	if (size() > 0 && cube.getLength() > peekTop().getLength()) {
		std::cerr << "A smaller cube cannot be placed on top of a larger cube." << std::endl;
		std::cerr << "  Tried to add Cube(length=" << cube.getLength() << ")" << std::endl;
		std::cerr << "  Current stack: " << *this << std::endl;

		throw std::runtime_error("A smaller cube cannot be placed on top of a larger cube.");
	}

	cubes_.push_back(cube);
}

Cube Stack::removeTop() {
	Cube cube = peekTop();
	cubes_.pop_back();
	return cube;
}


Cube& Stack::peekTop() {
	return cubes_[cubes_.size() - 1];
}

unsigned Stack::size() const{ //gives the size of the vector in the Stack object
	return cubes_.size();
}

std::ostream& operator<<(std::ostream& os, const Stack& stack) {
	int i;

	for (i = 0; i < ((int)stack.size()) - 1; i++) {
		os << stack.cubes_[i].getLength() << " ";
	}

	if (stack.size() > 0) {
		os << stack.cubes_[i].getLength();
	}

	return os;
}