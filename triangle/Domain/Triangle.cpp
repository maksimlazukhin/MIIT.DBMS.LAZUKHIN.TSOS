#include <stdexcept>
#include <sstream>

#include "Triangle.h"


double Triangle::GetPerimetr()
{
	return this->side_a + this->side_b + this->side_c;
}

double Triangle::GetArea() const
{
	return this->side_a * this->side_b * sin(this->angle_c) / 2; 
}

double Triangle::GetAngle(const char side)
{
	switch (side)
	{
	case 'A':
		return this->angle_a;
		break;
	case 'B':
		return this->angle_b;
		break;
	case 'C':
		return this->angle_c;
		break;
	default:
		std::out_of_range("Неправильно задан угол");
		break;
	}
}

double Triangle::GetHeight(const char side)
{
	switch (side)
	{
	case 'A':
		return this->side_b * sin(this->angle_c);
		break;
	case 'B':
		return this->side_a * sin(this->angle_c);
		break;
	case 'C':
		return this->side_b * sin(this->angle_a);
		break;
	default:
		std::out_of_range("Неправильно задана сторона");
		break;
	}

}

Triangle::Triangle(const double side_a, const double side_b, const double side_c)
{
	if ((side_a <= 0 or side_b <= 0 or side_c <= 0) or (side_a +side_b <=side_c) or (side_b +side_c <=side_a) or (side_a +side_c <=side_b)) 
		std::out_of_range("Неправильно заданы стороны");
	else
	{
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->angle_a = acos((side_b * side_b + side_c * side_c - side_a * side_a) / (2.0 * side_b * side_c));	/* по теореме косинусов */
		this->angle_b = acos((side_a * side_a + side_c * side_c - side_b * side_b) / 2.0 / side_a / side_c);
		this->angle_c = acos((side_a * side_a + side_b * side_b - side_c * side_c) / 2.0 / side_a / side_b);
	}
}

std::string Triangle::ToString() const
{
	std::stringstream buffer{};
	buffer << " A " << this->side_a << " B "<< this->side_b << " C "<< this->side_c << "\n";
	return buffer.str();
	
}
