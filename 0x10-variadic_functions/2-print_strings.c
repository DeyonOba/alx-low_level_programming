#include <stdarg.h>
/*#include "variadic_functions.h"*/
#include <stdio.h>

/**
 * print_strings - prints numbers, followed by a new line
 * @separator: separator between strings passed as arguments
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (i == n - 1)
			{
				if (str)
					printf("%s", str);
				else
					printf("(nil)");
			}
			else
			{
				if (str)
					printf("%s%s", str, separator);
				else
					printf("(nil)%s", separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);
}
