#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory to fill
 * @b: constant to fill memory with
 * @n: first number of bytes to fill memory
 * Return: pointer to memory locations.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
