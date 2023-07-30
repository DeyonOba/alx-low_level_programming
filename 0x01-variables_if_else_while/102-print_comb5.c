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
		for (j = '0'; j <= '8'; j++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (i == '0' && j == '0' && y == '0' && z == '0')
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (i == '9' && j == '8' && y == '9' && z == '9')
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
