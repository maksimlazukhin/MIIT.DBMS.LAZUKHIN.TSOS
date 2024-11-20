#include <stdexcept>
#include <sstream>

#include "Triangle.h"


double Triangle::GetPerimetr() const
{
	return this-> a + this-> b + this-> c;
}

double Triangle::GetArea() const
{
	return this-> a * this-> b * sin(this->angle_c) / 2; 
}


Triangle::Triangle(const double side_a, const double side_b, const double side_c)
{
	if ((side_a <= 0 or side_b <= 0 or side_c <= 0) or (side_a +side_b <=side_c) or (side_b +side_c <=side_a) or (side_a +side_c <=side_b)) 
		std::out_of_range("Неправильно заданы стороны");
	else
	{
		this->a = side_a;
		this->b = side_b;
		this->c = side_c;
		this->angle_a = acos((side_b * side_b + side_c * side_c - side_a * side_a) / (2.0 * side_b * side_c));	/* по теореме косинусов */
		this->angle_b = acos((side_a * side_a + side_c * side_c - side_b * side_b) / 2.0 / side_a / side_c);
		this->angle_c = acos((side_a * side_a + side_b * side_b - side_c * side_c) / 2.0 / side_a / side_b);
	}
}

std::string Triangle::ToString() const
{
	std::stringstream buffer{};
	buffer << " A " << this->a << " B "<< this->b << " C "<< this->c << "\n";
	return buffer.str();
	
}
