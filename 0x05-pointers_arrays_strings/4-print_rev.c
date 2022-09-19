#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer of string to reverse
 */
void print_rev(char *s)
{
	int i, j, k, count = 0;
	char rev[100];

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}

	for (k = 0; k < count; k++)
	{
		_putchar(rev[k]);
	}
	_putchar('\n');
}
