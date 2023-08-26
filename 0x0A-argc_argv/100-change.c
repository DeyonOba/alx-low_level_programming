#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int money, i, num = 0;
	char *endptr;
	int change[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = strtol(argv[1], &endptr, 10);

		if (money > 0)
		{
			for (i = 0; i < 5 && money > 0; i++)
			{
				if (change[i] <  money)
				{
					num += money / change[i];
					money = money % change[i];
				}
				else if (change[i] == money)
				{
					num += 1;
					money = 0;
				}
			}
		}
		printf("%d\n", num);
	}
	return (0);
}
