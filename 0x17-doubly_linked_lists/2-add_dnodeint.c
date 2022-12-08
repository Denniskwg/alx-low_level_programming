#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list
 * @head: pointer to a doubly linked list
 * @n: integer to add to a node
 * Return: newly added node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->prev)
			current = current->prev;
		current->prev = new;
		new->prev = NULL;
		new->next = current;
		*head = new;
	}
	return (new);
}
