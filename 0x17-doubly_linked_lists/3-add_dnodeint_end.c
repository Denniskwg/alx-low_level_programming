#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of
 * a dlistint_t list
 * @head: pointer to a doubly linked list
 * @n: integer to add to a new node
 * Return: pointer to a new nod or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		while (current->next)
			current = current->next;
		current->next = new;
		new->next = NULL;
		new->prev = current;
	}
	return (new);
}
