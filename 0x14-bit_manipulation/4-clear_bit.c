#include "main.h"
#include <stddef.h>

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: number to clear a bit
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;
	unsigned long int j;

	if (n == NULL || index > 31 || index == 0)
		return (-1);
	mask = (1 << index);
	j = *n;
	*n = *n & ~mask;
	if (*n == j)
		return (-1);
	else
		return (1);
}
