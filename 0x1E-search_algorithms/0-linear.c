#include "search_algos.h"

/**
 * linear_search - Implement linear search algorithm to find target in an array
 *
 * @array: Pointer to the begining of an array
 * @size: Number of elements in the array
 * @value: Target value to be search within the array
 * Return: Integer value of the index containing the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
