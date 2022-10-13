#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
