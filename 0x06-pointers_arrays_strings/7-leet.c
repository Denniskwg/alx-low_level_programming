#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: pointer to encodes string str
 */

char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aeotl"
	char numbers[] = "43071"

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
				break;
			}
		}
	}

	return (str);
}
