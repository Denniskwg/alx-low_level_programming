#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers supplied as arguments followed by
 * a new line
 * @separator: string to be printed between numbers
 * @n: arguments count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, j;

	va_start(ap, n);
	j = n;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < (j - 1))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
