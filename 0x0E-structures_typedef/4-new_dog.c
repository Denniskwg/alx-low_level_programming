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
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
