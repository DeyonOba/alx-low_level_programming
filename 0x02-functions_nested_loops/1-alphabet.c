#include"main.h"

/**
 * print_alphabet - print lower case alphabet characters (a-z)
 *
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
