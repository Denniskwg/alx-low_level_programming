#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_idx - insert a new node at given position
 * @h: double pointer to head
 * @idx: index to insert into
 * @n: value to store in new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new, *prev;
	unsigned int i = 0;

	current = *h;
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(&current, n);
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			prev = current->prev;
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
