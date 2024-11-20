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
	double side_a, side_b, side_c, angle_a, angle_b, angle_c;
public:
	/**
	* @brief расчитывает периметр.
	* @retutn периметр.
	*/
	double GetPerimetr();
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
	double GetAngle(const char side);
	/**
	* @brief расчитывает высоту.
	* @param имя стороны, на которую опущена высота -  'A','B' или 'C'
	* @retutn длина высоты.
	*/
	double GetHeight(const char side);
	/**
	* @brief инициализизирует объект Triangle.
	* @param  side - сторона.
	*/
	Triangle(const double side_a, const double side_b, const double side_c);

	std::string ToString() const;

};