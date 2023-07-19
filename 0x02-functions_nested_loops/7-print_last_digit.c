#include"main.h"

/**
 * print_last_digit - Display the last digit of an integer.
 *
 * @n: Takes in an integer character n.
 * Return: Last digit of n.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
}
