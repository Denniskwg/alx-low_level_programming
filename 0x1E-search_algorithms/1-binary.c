#include "search_algos.h"
/**
 * binary_search - searches for an element in an array
 * using binary search
 * @array: array to search
 * @size: size of the array
 * @value: value to search
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0;
	size_t R = size - 1;
	int m;

	while (L <= R)
	{
		print_array(array, L, R);
		putchar('\n');
		m = (int) ((L + R) / 2);
		if (array[m] > value)
			R = m - 1;
		else if (array[m] < value)
			L = m + 1;
		else
			return (m);
	}
	return (-1);
}
/**
 * print_array - prints an array of integers at certain
 * limits
 * @array: array to print from
 * @L: lower limit
 * @R: upper limit
 */
void print_array(int *array, size_t L, size_t R)
{
	size_t k = 0;
	char *s = "Searching in array: ";
	int copy;

	while (s[k] != '\0')
	{
		putchar(s[k]);
		k++;
	}
	k = L;
	while (k <= R)
	{
		if (array[k] == 0)
			putchar('0');
		else if (array[k] < 0)
		{
			copy = -array[k];
			putchar('-');
			convert_to_str(copy);
		}
		else
			convert_to_str(array[k]);
		if (k < R)
		{
			putchar(',');
			putchar(' ');
		}
		k++;
	}
}

/**
 * convert_to_str - prints converted integer
 * @n: integer to print
 */
void convert_to_str(int n)
{
	if (n == 0)
	{
		return;
	}

	convert_to_str(n / 10);
	putchar(n % 10 + '0');
}
