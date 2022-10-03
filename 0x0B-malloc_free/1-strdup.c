#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to copy into the newly created memory
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, k;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		ptr[k] = str[k];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
