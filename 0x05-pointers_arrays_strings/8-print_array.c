#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer of array to print
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	for ( ; i < n; a++)
	{
		i++;
		printf("%d", *(a));
		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
