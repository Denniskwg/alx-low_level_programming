#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of range of integers between
 * min and max
 * @min: the first element in the array
 * @max: the last element in the array
 * Return: pointer to the created array or NULL if min > max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
