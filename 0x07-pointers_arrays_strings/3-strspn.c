#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check initial segment
 * @accept: string to compare to initial segment of s
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (counter);
}
