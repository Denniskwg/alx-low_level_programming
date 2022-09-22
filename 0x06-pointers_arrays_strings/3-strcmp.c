#include "main.h"

/**
 * _strcmp - compares two strings lexicographically
 * @s1: leftstring
 * @s2: rightstring
 * Return: 0 if strings are equal, 15 if it encounters
 * a character that is lexicographicly greater than s2
 * (-15) if it encounters a character that is lexicographically
 * lower than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
