#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Unsigned long integer
 * @index: Index
 *
 * Return: Bit value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;

	i = (int)index;
	if (i >= 0 && i < (int)(sizeof(unsigned long int)) * 8)
	{
		*n &= ~(1UL << i);
		return (1);
	}
	else
	{
		return (-1);
	}
}
