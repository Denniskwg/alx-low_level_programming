#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 *
 *
 *
 *
 *
 *
 */
void times_table(void)
{
	int i;
	int j;
	int sum;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			sum = i * j;
			if (sum > 9)
			{
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar(sum + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
