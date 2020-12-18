#include "Stack.h"
void Stack::pushback(const Cube& obj) {
	cubes_.push_back(obj);
}

void Stack::removeTop() {
	cubes_.pop_back();
}

Cube& Stack::peekTop() {
	return cubes_.back();
}

unsigned Stack::size() const{ //gives the size of the vector in the Stack object
	return cubes_.size();
}

std::ostream& operator<<(std::ostream &os, const Stack& stack) {
	for (unsigned i = 0; i < stack.size(); ++i) { //.size() is our user defined func(line 14)
		os << stack.cubes_[i].getLength() << " ";
	}
	os << std::endl;
	return os;
}