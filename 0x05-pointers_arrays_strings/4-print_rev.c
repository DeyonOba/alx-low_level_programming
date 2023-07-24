#include "main.h"
#include <string.h>

/**
 * print_rev - Print a string in reverse
 *
 * @s: String characters
 */
void print_rev(char *s)
{
	size_t i;
	size_t limit = 0;

	for (i = (strlen(s) - 1); i >= limit; i--)
	{
		if (s[i] == '\0')
		{
			break;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
