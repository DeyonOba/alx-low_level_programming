#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiple only the first two command line argument
 *
 * @arg: Arguement count
 * @argv: Arguement vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc,char **argv)
{
	if (argc - 1 == 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

