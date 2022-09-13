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
		l = -1 * (c % 10);
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = c % 10;
		_putchar(l + '0');
		return (l);
	}
}
