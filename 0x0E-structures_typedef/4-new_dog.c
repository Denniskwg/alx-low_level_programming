#include "dog.h"
#include <stdlib.h>
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
	char *n = name;
	char *o = owner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = n;
	newdog->age = age;
	newdog->owner = o;
	return (newdog);
}
