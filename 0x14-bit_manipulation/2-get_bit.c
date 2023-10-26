#include "main.h"
#include <stdio.h>

/**
 * get_bit - Gets the bit at a given index
 * @n: Unsigned long interger number
 * @index: The index
 *
 * Return: Bit value either 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = (int)index;

	if (i >= 0 && i < (int)(sizeof(unsigned long int)) * 8)
	{
		unsigned long int mask = 1UL << i;

		return ((n & mask) ? 1 : 0);
	}
	else
	{
		return (-1);
	}
}
