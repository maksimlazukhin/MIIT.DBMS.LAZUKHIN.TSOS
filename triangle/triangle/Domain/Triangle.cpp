#include <stdexcept>
#include <sstream>

#include "Triangle.h"


double Triangle::GetPerimetr() const
{
	return this->side_A + this->side_B + this->side_C;
}

double Triangle::GetArea() const
{
	return this->side_A * this->side_B * sin(this->angle_C) / 2; 
/*	return  sin(this->angle_C);*/
}



Triangle::Triangle(const double side_A, const double side_B, const double side_C)
{
	if ((side_A <= 0 or side_B <= 0 or side_C <= 0) or (side_A +side_B <=side_C)) 
		std::out_of_range("Неправильно заданы стороны");
	else
	{
		this->side_A = side_A;
		this->side_B = side_B;
		this->side_C = side_C;
		this->angle_A = acos((side_B * side_B + side_C * side_C - side_A * side_A) / (2.0 * side_B * side_C));
		this->angle_B = acos((side_A * side_A + side_C * side_C - side_B * side_B) / 2.0 / side_A / side_C);
		this->angle_C = acos((side_A * side_A + side_B * side_B - side_C * side_C) / 2.0 / side_A / side_B);
	}
}

std::string Triangle::ToString() const
{
	std::stringstream buffer{};
	buffer << this->side_A << "\n";
	return buffer.str();
	
}
