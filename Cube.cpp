#include "Cube.h"

Cube::Cube() {
	length_ = 0;
	color_ = Color::grey;
}
	
Cube::Cube(int size,Color color)
{
	length_ = size;
	color_ = color;
}

int Cube::getLength() const {
	return length_;
}

