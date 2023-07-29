#include <stdio.h>

/**
 * main - Print the possible combination of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, z;
	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			z = j + 1;
			while (z <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i == '7')
				{
					break;
				}
				putchar(',');
				putchar(' ');
				z++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
