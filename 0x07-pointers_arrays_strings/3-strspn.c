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

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}
