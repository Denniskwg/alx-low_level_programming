#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog.
 * You have to store a copy of name and owner
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: pointer to newly created dog of type dog_t or
 * NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;
	int i, j, k, l;
	char *n, *o;

	i = length(name);
	j = length(owner);
	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(newdog);
		return (NULL);
	}
	k = 0;
	while (k <= i)
	{
		n[k] = name[k];
		k++;
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(newdog);
		return (NULL);
	}
	l = 0;
	while (l <= j)
	{
		o[l] = owner[l];
		l++;
	}
	newdog->name = n;
	newdog->age = age;
	newdog->owner = o;
	return (newdog);
}
/**
 * length - calculates length of a string
 * @s: pointer to string
 * Return: length of a string
 */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
