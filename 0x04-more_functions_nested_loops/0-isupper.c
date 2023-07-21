#include "main.h"

/**
 * _isupper - Checks for upper case letters
 *
 * @c: Takes a character
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}	
