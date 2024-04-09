#include "search_algos.h"

/**
 * print_array - Display items in array within a defined rangei
 *
 * @array: Pointer to the begining of the array
 * @left: Starting array index
 * @right: Ending array index
 */
void print_array(int *array, size_t left, size_t right)
{
	for (; left < right + 1; left++)
	{
		if (left == right)
			printf("%d\n", array[left]);
		else
			printf("%d, ", array[left]);
	}
}

/**
 * binary_search - Search for value in array using binary search algorithm
 *
 * @array: Pointer to the beginnig of the array
 * @size: Number of elements in the array
 * @value: Target value to be search for
 * Return: The index of the found item, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		/* Display the array being searched*/
		printf("Searching in array: ");
		print_array(array, left, right);

		mid = (right + left) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] == value)
			return (mid);
	}

	return (-1);
}
