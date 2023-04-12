#include "search_algos.h"
/**
 * linear_search - searches for a value in an
 * array of integers using the Linear search algorithm
 * @size: number of elements in the array
 * @array: pointer to first element in array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		print(i, array[i]);
		putchar('\n');
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
/**
 * print - prints the value in the array already
 * compared in the format Value checked array[] = []
 * @i: index of array
 * @j: actual element of array
 */
void print(int i, int j)
{
	int k = 0;
	int first = 0;
	char *s = "Value checked array[] = []";
	int copy = j;

	while (s[k] != '\0')
	{
		if (s[k] == '[')
		{
			putchar(s[k]);
			k++;
			if (first == 0)
				putchar(i + '0');
			else
			{
				if (copy == 0)
					putchar('0');
				else if (copy < 0)
				{
					putchar('-');
					copy = -copy;
					convert(copy);
				}
				else
					convert(copy);
			}
			first++;
		}
		putchar(s[k]);
		k++;
	}
}
/**
 * convert - prints converted integer
 * @n: integer to print
 */
void convert(int n)
{
	if (n == 0)
	{
		return;
	}

	convert(n / 10);
	putchar(n % 10 + '0');
}
