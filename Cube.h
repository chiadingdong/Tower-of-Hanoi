#pragma once

enum class Color {
	blue,
	orange,
	purple,
	yellow,
	grey //default color
};

class Cube
{
public:
	Cube();
	Cube(int, Color);
	int getLength() const;
private:
	int length_;
	Color color_;

};

