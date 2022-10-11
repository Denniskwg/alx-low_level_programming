#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the dog of type dog_t
 * @d: pointer to dog type
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
