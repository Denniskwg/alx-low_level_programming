#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to check against s for first occurence of byte
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int k = 0;
	int min;
	int arr[5];
	int counter = 5;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0' && k < 5; j++)
		{
			if (accept[i] == s[j])
			{
				arr[k] = j;
				k++;
			}
			else
				counter--;
		}
	}
	min = arr[0];
	for (i = 0; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	if (counter == 0)
		return ('\0');
	return (s + min);
}
