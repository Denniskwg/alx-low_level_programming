#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to string to locate character
 * @c: character to locate
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
		i++;
	}
	return (NULL);
}
