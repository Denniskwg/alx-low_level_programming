#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array to print
 */

void print_chessboard(char (*a)[8])
{
	int column = sizeof(a[0]) / sizeof(a[0][0]);
	int i, j;

	i = 0;

	while (i < 8)
	{
		j = 0;
		while (j < column)
		{
			_putchar(a[i][j]);
			j++;
			if (j > column - 1)
				_putchar('\n');
		}
		i++;
	}

}
