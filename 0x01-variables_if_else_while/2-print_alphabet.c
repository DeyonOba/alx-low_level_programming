#include <unistd.h>

/**
 * _putchar - write character to the stdout.
 *
 * @c: The to print
 * Return: 1 (Success), -1 (Error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
