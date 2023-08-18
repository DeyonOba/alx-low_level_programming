#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to an integer array
 * @size: size of array
 * @cmp: function pointer to be executed
 * Return: index if number is found, else return -1 if size is 0,
 * or integer not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
