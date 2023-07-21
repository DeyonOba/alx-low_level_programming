#include "main.h"

/**
 * print_most_numbers - print number, from 0 to 9, excludin 2 and 4
 *
 *
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
