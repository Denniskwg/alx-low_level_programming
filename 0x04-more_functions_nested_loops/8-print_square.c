#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
			break;
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			if (j == size)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
