#include "main.h"
#include <stdio.h>

/**
 * _strcnat - concatenates two strings
 * @dest: pointer to array to concat into
 * @src: pointer to array to concat with
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, i;
	int length = 0;

	for (j = 0; dest[j] != '\0'; j++)
	{
		length++;
	}

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, length++)
	{
		dest[length] = src[i];
	}	
	return (dest);
}

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
