#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index -  returns the nth node of a
 * doubly linked list
 * @head: pointer to start of doubly linked list
 * @index: index of a node
 * Return: pointer to node at position index of
 * doubly linked list or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
