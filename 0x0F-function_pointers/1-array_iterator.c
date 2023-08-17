#include "function_pointers.h"

/**
 * array_iterator - execute function that prints array elements
 *
 * @array: pointer to an integer array
 * @size: size of array
 * @action: function pointer to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
