#include "function_pointers.h"

/**
 * array_iterator - execute function that prints array elements
 *
 * @array: pointer to an integer array
 * @size: size of array
 * @action: function pointer to be executed
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
