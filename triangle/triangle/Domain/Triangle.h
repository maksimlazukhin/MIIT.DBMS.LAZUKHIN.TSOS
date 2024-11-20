#pragma once

/**
* @brief Класс Треугольник.
*/

class Triangle
{
private:
	/**
	* @brief Стороны.
	*/
	double side_A, side_B, side_C,angle_A, angle_B, angle_C;
public:
	/**
	* @brief расчитывает периметр.
	* @retutn периметр.
	*/
	double GetPerimetr() const;
	/**
	* @brief расчитывает площадь.
	* @retutn площадь.
	*/
	double GetArea() const;
	/**
	* @brief расчитывает угол.
	* @param имя стороны, противоположенной искомому углу - 'A','B' или 'C'
	* @retutn угол в радианах.
	*/
	
	Triangle(const double side_A, const double side_B, const double side_C);

	std::string ToString() const;

};