#include <stdio.h>

/**
 * main - print character a to z
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
