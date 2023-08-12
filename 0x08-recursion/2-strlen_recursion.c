#include "main.h"

/**
 * _strlen_recursion - get the length of a string
 * @s: pointer to a string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s != '\0')
	{
		num += 1;
		return (num + _strlen_recursion(s + 1));
	}
	return (0);
}
