#include"main.h"

/**
 * print_sign - Funtion that prints the sign of a number
 *
 * @n: Takes an integer character n
 *
 * Return: 1 if n is greater than 0, if n equal 0 return 0
 * finally if n less than 0 return -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
