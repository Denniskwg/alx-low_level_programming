#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array to be created
 * @c: char to fill array with
 * Return: NULL if size = 0 or malloc fails, else a ponter to the
 * created array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == i)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
