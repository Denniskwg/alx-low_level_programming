#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to array to concat into
 * @src: pointer to array to concat with
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int j, i;
	int length = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
