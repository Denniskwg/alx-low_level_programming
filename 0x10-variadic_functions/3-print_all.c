#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format string to format output
 */

void print_all(const char * const format, ...)
{
	int i = 0, k = 0;
	va_list ap;
	char *s;
	int j = length(format);

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				k++;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				k++;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				k++;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				k++;
				break;
			default:
				k--;
				break;
		}
		if ((i < j - 1) && k)
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
/**
 * length - calculates length of a string
 * @s: pointer to string
 * Return: length of a string
 */
int length(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
