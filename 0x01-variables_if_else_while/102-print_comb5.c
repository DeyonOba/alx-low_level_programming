#include <stdio.h>

/**
 * main - Print the possible combination of four digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, y, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '1'; z <= '9'; z++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (i == '9' && j == '9' && y == '9' && z == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
