#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of the first element for which the cmp
 * function does not return 0
 * @array: pointer to an array of ints
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: index of the first element for which the cmp function does not
 * return 0 or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 0)
			i++;
		else
			return (i);
	}
	return (-1);
}
