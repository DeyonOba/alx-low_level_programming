#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - create an array of a defined size with a constant character
 * @str: character array of n bytes
 *
 * Return: pointer contain contents of str, store in the heap memory
 */
char *_strdup(char *str)
{
	int size = 0;
	char *s, *ret;

	if (!str)
	{
		return (NULL);
	}
	s = str;
	while (*s++)
	{
		size++;
	}

	ret = malloc(size + 1);
	if (!ret)
	{
		return (NULL);
	}

	s = ret;
	while (*str)
		*s++ = *str++;

	*s = 0;
	return (ret);
}
