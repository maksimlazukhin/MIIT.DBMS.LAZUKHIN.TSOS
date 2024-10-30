#pragma once
/**
* @brief  ласс “реугольник.
*/

class Triangle
{
private:
	/**
	* @brief —тороны.
	*/
	double side_A, side_B, side_C;
public:
	/**
	* @brief расчитывает периметр.
	* @retutn периметр.
	*/
	GetPerimetr();
	/**
	* @brief расчитывает площадь.
	* @retutn площадь.
	*/
	GetArea();
	/**
	* @brief расчитывает угол.
	* @param им€ стороны, противоположенной искомому углу - 'A','B' или 'C'
	* @retutn угол в радианах.
	*/
	GetAngle(const char side);
	/**
	* @brief расчитывает высоту.
	* @param им€ стороны, на которую опущена высота -  'A','B' или 'C'
	* @retutn длина высоты.
	*/
	GetHeight(const char side);
	/**
	* @brief инициализизирует объект Triangle.
	* @param  side - сторона.
	*/
	Triangle(const double side_A, const double side_B, const double side_C);
};