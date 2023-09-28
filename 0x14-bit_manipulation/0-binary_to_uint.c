#include "main.h"

/**
 * binary_to_uint - Convert binary string to integer number
 * @b: Binary string
 *
 * Return: Unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int ascii_0 = 48, sum = 0, c, pow;
	size_t size = strlen(b), n = size - 1, i;

	for (i = 0; i < size; i++, n--)
	{
		c = b[n];

		if (c == ascii_0 || c == ascii_0 + 1)
		{
			if (i == 0)
				pow = 1;
			else
				pow *= 2;
			sum += pow * (c - ascii_0);
		}
		else
			return (0);
	}
	return (sum);
}
