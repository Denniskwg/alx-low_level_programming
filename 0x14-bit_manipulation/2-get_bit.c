#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit
 * @index: index of bit in n
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > 31)
		return (-1);
	mask = (1 << index);
	if (n & mask)
		return (1);
	else
		return (0);
}
