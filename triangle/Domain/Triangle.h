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
	double a, b, c, angle_a, angle_b, angle_c;
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
	* @brief инициализизирует объект Triangle.
	* @param  side - сторона.
	*/
	Triangle(const double side_a, const double side_b, const double side_c);

	std::string ToString() const;

};