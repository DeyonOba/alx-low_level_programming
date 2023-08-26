#include <stdio.h>

/**
 * main - Print the string arguments save in argv
 *
 * @argc: Command line argument count
 * @argv: Argument vector containing an array of pointers to string characters
 * Return: 0 (Success), -1 (Error)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
