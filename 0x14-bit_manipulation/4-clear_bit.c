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
	unsigned long mask;

	if (n == NULL || index > 63)
		return (-1);
	mask = (unsigned long)(1 << index);
	*n = *n & ~mask;
	return (1);
}
