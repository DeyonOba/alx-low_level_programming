#include <stdio.h>

/**
 * main - Print single digit numbers followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
