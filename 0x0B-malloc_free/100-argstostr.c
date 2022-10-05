#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: list of pointers to string arguments
 * Return: pointer to newly allocated string of concatenated arguments
 * or NULL if malloc fail, or if ac == 0, or if av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *s;
	int i, j, k, v;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = slength1(*(av + i));
		length += j;
	}
	ptr = malloc(sizeof(char) * (length + (ac + 1)));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ac)
	{
		s = *(av + i);
		v = 0;
		while (s[v] != '\0' && v < slength1(s))
		{
			ptr[k] = s[v];
			v++;
			k++;
		}
		ptr[k] = '\n';
		if (i < ac)
			k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
/**
 * slength1 - returns the length of a string
 * @s: pointer to a string
 * Return: length of string pointed to by s
 */
int slength1(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
