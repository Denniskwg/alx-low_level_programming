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
	int count = 0;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
		count++;
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
