#include "main.h"

/**
 * _pow_recursion - calculate the value of x raised to the power of y
 * @x: number constant
 * @y: power
 *
 * Return: number representing the power of x and y, -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
