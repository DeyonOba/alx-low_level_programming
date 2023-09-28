#include "main.h"

/**
 * print_binary - prints binary digit from decimals
 * @n: positive number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bitFlag = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			putchar('1');
			bitFlag = 1;
		}
		else if (bitFlag == 1 || mask == 1)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}

