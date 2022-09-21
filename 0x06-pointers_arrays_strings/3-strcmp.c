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
	int j;
	int count = 0;
	int res;

	for (j = 0; s1[j] != '\0'; j++)
	{
		count++;
	}

	for (i = 0; s1[i] != '\0' && i < count; i++)
	{
		if (s1[i] == s2[i])
		{
			res = 0;
		}
		else
		{
			if (s1[i] > s2[i])
			{
				res = 15;
				break;
			}
			else
			{
				res = -15;
				break;
			}
		}
	}
	return (res);
}
