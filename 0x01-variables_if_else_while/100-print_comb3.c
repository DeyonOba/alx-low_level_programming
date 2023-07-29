#include <stdio.h>

/**
 * main - Print the possible combination of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i == '8')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
	}
	putchar('\n');
	return (0);
}
