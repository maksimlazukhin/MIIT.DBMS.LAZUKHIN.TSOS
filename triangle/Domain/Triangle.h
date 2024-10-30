#pragma once
/**
* @brief ����� �����������.
*/

class Triangle
{
private:
	/**
	* @brief �������.
	*/
	double side_A, side_B, side_C;
public:
	/**
	* @brief ����������� ��������.
	* @retutn ��������.
	*/
	GetPerimetr();
	/**
	* @brief ����������� �������.
	* @retutn �������.
	*/
	GetArea();
	/**
	* @brief ����������� ����.
	* @param ��� �������, ����������������� �������� ���� - 'A','B' ��� 'C'
	* @retutn ���� � ��������.
	*/
	GetAngle(const char side);
	/**
	* @brief ����������� ������.
	* @param ��� �������, �� ������� ������� ������ -  'A','B' ��� 'C'
	* @retutn ����� ������.
	*/
	GetHeight(const char side);
	/**
	* @brief ���������������� ������ Triangle.
	* @param  side - �������.
	*/
	Triangle(const double side_A, const double side_B, const double side_C);
};