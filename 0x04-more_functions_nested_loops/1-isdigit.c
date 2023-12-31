#include "main.h"

/**
 * _isdigit - Checks for a digit(0 through 9)
 *
 * @c: Takes the an integer value
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
