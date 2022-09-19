#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer of string to print
 */

void puts_half(char *str)
{
	int i, j;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	if (count % 2 == 0)
	{
		for (j = count / 2; j < count; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = ((count - 1) / 2); j < count; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
}
