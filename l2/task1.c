#include <math.h>
#include <stdbool.h>

//task1. ���������� true ���� ����� �������� � �������������� �������
_Bool isInArea(double x, double y)
{
	if (pow(x, 2) + pow(y, 2) <= 1 && (x >= 0 || y >= 0))
		return true;
	else
		return false;
}