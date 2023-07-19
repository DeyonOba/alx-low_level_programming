#include"main.h"

/**
 * _isalpha - Checks for lower and upper case characters
 * @c: Takes in a character type
 *
 * Return: 1 if character is alphabet else 0
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
