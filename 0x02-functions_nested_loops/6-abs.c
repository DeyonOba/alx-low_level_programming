#include "main.h"

/**
 * _abs - Return the absolute value of an integer
 *
 * @n: Takes in an integer value
 *
 * Return: if n is less than 0 multiple by -1, else return n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
