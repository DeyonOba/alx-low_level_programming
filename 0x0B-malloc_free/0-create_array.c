#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of a defined size with a constant character
 * @size: the size of the array
 * @c: character constant duplicated in the array
 *
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	m = (char *)malloc(sizeof(c) * size);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		m[i] = c;
	}
	return (m);
}
