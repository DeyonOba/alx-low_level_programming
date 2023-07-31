#include "main.h"

/**
 * _memset - Fill memory with constant byte
 * @s: pointer to a variable (buffer)
 * @b: character used to fill memory
 * @n: number of times b is to be filled
 *
 * Return: s (pointer variable)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
