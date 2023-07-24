#include "main.h"
#include <string.h>

/**
 * _puts - prints a string, followed by a new line
 *
 * @s: String characters
 */
void _puts(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
