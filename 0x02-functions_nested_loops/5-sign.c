#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: The number to check
 *
 * Return: if n is positive 1.
 * if n is 0, 0 is returned.
 * if n is negative, -1 is returned.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
