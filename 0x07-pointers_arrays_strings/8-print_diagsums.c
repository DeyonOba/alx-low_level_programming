#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_1 = sum_1 + a[i][j];
			}
			else if (i + j == size - 1)
			{
				sum_2 = sum_2 + a[i][j];
			}
		}
	}
	printf("%d, %d", sum_1, sum_2);
}
