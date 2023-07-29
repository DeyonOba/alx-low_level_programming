#include <stdio.h>

/**
 * main - print character a to z, except e and q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
