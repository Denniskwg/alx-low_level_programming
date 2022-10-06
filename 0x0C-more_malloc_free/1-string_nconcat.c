#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: string to concatenate with s1
 * @n: number of bytes of s2 to concatenate with s1
 * Return: a pointer to the concatenated string assigned by malloc
 * or NULL if malloc fails.
 * if NULL is passed it should be treated as an empty string
 * if n is greater or equal to length of s2 use all bytes of
 * s2 to concat with s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, l;

	l = slength(s1, s2, n);
	ptr = malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (s1 != NULL)
	{
		while (i < l && s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0' && j < n)
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * slength - helper function that returns the number of bytes to
 * be passed into malloc for dynamic memory allocation for
 * concatenation of two strings
 * @s: pointer to first string
 * @s1: pointer to second string
 * @n: number of bytes from s1 to add to the length of s
 * Return: number of bytes to allocate minus the null
 * terminating byte
 */
unsigned int slength(char *s, char *s1, unsigned int n)
{
	unsigned int i, j;

	if (s == NULL)
		i = 0;
	else
	{
		i = 0;
		while (s[i] != '\0')
			i++;
	}
	if (s1 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s1[j] != '\0')
			j++;
	}
	if (j == 0)
		return (i + 0);
	if (n >= j)
		return (i + j);
	else
		return (i + n);
}
