#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new, *prev;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);
	current = *h;
	while (current != NULL)
	{
		prev = current->prev;
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current;
			new->prev = prev;
			current->prev = new;
			if (prev != NULL)
				prev->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
