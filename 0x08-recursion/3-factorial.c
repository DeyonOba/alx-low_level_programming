#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: interger number
 *
 * Return: factorial of a the number n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
