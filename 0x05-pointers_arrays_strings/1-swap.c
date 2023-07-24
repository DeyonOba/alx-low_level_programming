#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Takes in an integer
 * @b: Takes in an integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
