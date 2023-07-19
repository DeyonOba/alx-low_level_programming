#include"main.h"

/**
 * _islower - Checks for lower characters
 * @c: Takes in a character type
 *
 * Return: 1 if character is lower else 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
