#pragma once
#include <iostream>
#include <cmath>

class Rectangle //Declares the Rectangle class
{
private:
	double length;
	double width;

public:
	Rectangle();
	Rectangle(double l, double w);

	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}
	double GetArea()
	{
		return length * width;
	}
	double GetPerimeter()
	{
		return 2 * (length + width);
	}
};
