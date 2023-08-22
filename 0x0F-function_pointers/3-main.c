#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple calculation operations
 * @argc: number of command line arguments
 * @argv: string value of arguments
 *
 * Return: 0 (Success), -1 (Error)
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	char *operator = argv[2];
	int b = atoi(argv[3]);

	if (argc != 4)
		return (-1);
	printf("%d\n", (get_op_func(operator))(a, b));

	return (0);
}
