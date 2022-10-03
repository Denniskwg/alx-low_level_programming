#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings into a newly allocated address by
 * malloc.
 * @s1: first string. if NULL is passed treat it as an empty string
 * @s2: second string. if NULL is passed treat it as an empty string
 * Return: NULL if malloc fails, else a pointer to the newly allocated
 * memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, length, k, l;

	i = slength(s1);
	j = slength(s2);
	length = i + j;
	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
		return (NULL);

	k = 0;
	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}

	l = 0;
	while (k < length)
	{
		ptr[k] = s2[l];
		k++;
		l++;
	}
	ptr[k] = '\0';
	return (ptr);
}

/**
 * slength - returns the length of a string pointed to by s
 * @s: pointer to string to find length. if null is passed it is treated as an
 * empty string
 * Return: length of a string
 */
int slength(char *s)
{
	int i;

	if (s == NULL || s[0] == '\0')
		i = 0;
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
