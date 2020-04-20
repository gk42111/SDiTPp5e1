#pragma once
#include "Polygon.h"
#include <iostream>

class Triangle : Polygon
{
private:
	double Height;
public:
	Triangle();
	Triangle(int X, int Y, double Height);
	~Triangle();
	double Area();
};

