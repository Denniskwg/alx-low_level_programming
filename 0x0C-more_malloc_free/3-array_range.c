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
	int i, j;

	if (min > max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	i++;
	min = min - i;
	ptr = malloc((i + 1) * sizeof(int));
	ptr[0] = min;
	j = 1;
	while (j < i)
	{
		min++;
		ptr[j] = min;
		j++;
	}
	ptr[j] = max;
}
