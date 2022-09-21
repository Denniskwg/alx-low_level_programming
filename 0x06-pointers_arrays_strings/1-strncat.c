#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to array to concat into
 * @src: pointer to array to concat with
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;
	int length = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, length++)
	{
		dest[length] = src[i];
	}
	return (dest);
}
