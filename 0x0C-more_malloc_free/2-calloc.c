#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array using malloc
 * @nmemb: number of elements in array if == 0 return NULL
 * @size: size of each byte in the array if == 0 return NULL
 * Return: pointer to allocated memory or NULL if malloc
 * fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	return (ptr);
}
