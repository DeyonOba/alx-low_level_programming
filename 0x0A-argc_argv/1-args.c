#include <stdio.h>

/**
 * main - Print number of argument pass in the command line
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success), -1 (Error)
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

