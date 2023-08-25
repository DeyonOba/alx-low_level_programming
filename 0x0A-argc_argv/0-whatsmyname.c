#include <stdio.h>

/**
 * main - print the name of the executable file
 *
 * @argc: Argument count
 * @argv: Argument vector contain a string list of command line argument
 * Return: 0 (Success), -1 (Error)
 */
int main(int argc,char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
