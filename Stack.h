#pragma once
#include "Cube.h"
#include <iostream>
#include <vector>

class Stack
{
public:
	void pushback(const Cube&);
	void removeTop();
	Cube& peekTop();
	unsigned size() const;
	//overloaded operator << to allow us print the stack via cout
	friend std::ostream& operator<<(std::ostream &,const Stack&);
private:
	std::vector<Cube> cubes_;
};

