#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - function allocates memory using malloc
 * @b: number of bytes to allocated
 *
 * Return: returns a pointer to the allocated memory, if pointer is NULL
 * terminate process with status code of 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
