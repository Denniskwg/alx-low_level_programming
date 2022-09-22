#include "main.h"

/**
 * _strncpy - copies the first n characters of a string
 * @dest: pointer to buffer where to copy string
 * @src: pointer to string to be copied
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
