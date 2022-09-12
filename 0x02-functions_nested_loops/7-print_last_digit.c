#include "main.h"
/**
 * print_last_digit - prints the last dinit of an integer
 *
 * @c: The number to check
 *
 * Return: The last digit of the integer
 *
 *
 */
int print_last_digit(int c)
{
	int l;

	if (c < 0)
	{
		l = ((c) * (-1));
	}
	else
	{
		l = c;
	}

	_putchar((l % 10) + '0');
	return (l % 10);
}
