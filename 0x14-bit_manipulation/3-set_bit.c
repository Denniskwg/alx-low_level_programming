#include "main.h"
#include <stddef.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: number to set bit
 * @index:  index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = (1 << index);
	unsigned long int j;

	if (n == NULL || index > 31)
		return (-1);
	j = *n;
	*n = mask | (*n);
	if (j == (*n))
		return (-1);
	else
		return (1);
}
