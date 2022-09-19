#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to location of string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; s++)
	{
		j++;
	}

	return (j);
}
