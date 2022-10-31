#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print binary representation
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		unsigned long mask = (unsigned long)(1 << i);

		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag > 0)
				_putchar('0');
		}
	}
}
