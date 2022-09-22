#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: the array to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int t;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
