#include <stdio.h>
#include <stdlib.h>

/**
 * main - Converts and add all positive command line argument
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int i;
	char *endptr;
	int num, sum = 0;

	if (argc - 1 == 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &endptr, 10);

			if (num < 0 || *endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
