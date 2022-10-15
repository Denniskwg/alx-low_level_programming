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
	unsigned int i = 0;
	va_list ap;
	char *s;
	double p;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				printf(", ");
				break;
			case 'e':
				p = va_arg(ap, double);
				if (p)
				{
					printf("%f", va_arg(ap, double));
					printf(", ");
				}
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				printf(", ");
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
