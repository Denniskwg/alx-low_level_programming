#include "main.h"
#include <stdio.h>

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

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
