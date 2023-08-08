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
	char *s;
	int i = 0;

	if (str == 0)
	{
		return (NULL);
	}
	s = (char *)malloc(sizeof(str) * (sizeof(*str) / sizeof(char)));
	if (s == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
