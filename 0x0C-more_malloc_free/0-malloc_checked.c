#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc of size b
 * @b: size of memory to dynamically allocate if b is not greater
 * than or equal to INT_MAX
 * Return: a void pointer to allocated memory or exits with status 98 if
 * malloc fails or b is greater than or equal to INT_MAX
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b >= INT_MAX)
	{
		p = NULL;
		exit(98);
	}
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
