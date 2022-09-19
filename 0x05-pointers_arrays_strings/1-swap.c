#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to value to swap with b
 * @b: pointer to value to swap with a
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
