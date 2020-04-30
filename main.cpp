#include <iostream>
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
using namespace std;

int main() {
	Triangle t(),t1(1,2),t2(4,5,6);
	
	cout << t2.Area() << endl;


	system("pause");
	return 0;
}
