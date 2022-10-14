#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *str;

	va_start(ap, n);

	j = n;
	while (i < n)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
			if (separator != NULL && i < (j - 1))
				printf("%s", separator);
		}
		else
		{
			printf("%s", str);
			if (separator != NULL && i < (j - 1))
				printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
