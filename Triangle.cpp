#include "Triangle.h"
#include <cmath>



Triangle::Triangle(int X, int Y, double Height) : Polygon(3 ,X, Y)
{
	this->Height = Height;
}


Triangle::~Triangle()
{
}

double Triangle::Area()
{
	double podstawa = Sides[0];
	return podstawa * Height / 2;
}
