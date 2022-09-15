#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
			if (j == size)
			{
				_putchar('\n');
			}
		}
	}
}

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}
