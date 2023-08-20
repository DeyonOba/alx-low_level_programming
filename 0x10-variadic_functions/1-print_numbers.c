#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string of characters that seperates the numbers
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", va_arg(args, int));
			}
			else
			{
				printf("%d%s", va_arg(args, int), separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
		}
	}
	printf("\n");
}


