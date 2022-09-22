#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: pointer to encodes string str
 */

char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == 'a' || str[i] == 'A')
			str[i] = 4;
		while (str[i] == 'e' || str[i] == 'E')
			str[i] = 3;
		while (str[i] == 'o' || str[i] == 'O')
			str[i] = '0'
		while (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		while (str[i] == 'l' || str[i] == 'L')
			str[i] = '7'
	}

	return (s);
}
