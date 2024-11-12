#include <iostream>
#include "../Domain/Triangle.h"

/**
* @brief 
*/
int main()
{
	Triangle triangle(5, 3, 4);
	auto triangle1 = new Triangle(2, 2, 3);
	std::cout << " Angles " << triangle.GetAngle('A') << "   " << triangle.GetAngle('B') << "   " << triangle.GetAngle('C') << std::endl;
	std::cout <<" Area =" << triangle.GetArea() << std::endl;
	std::cout << " Perimetr =" << triangle.GetPerimetr() << std::endl;
	std::cout << triangle1->GetArea() << std::endl;
	delete triangle1;
	return 0;
}