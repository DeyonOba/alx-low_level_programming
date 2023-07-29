#include <stdio.h>

/**
 * main - Print lower case alphabet in reverse followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
