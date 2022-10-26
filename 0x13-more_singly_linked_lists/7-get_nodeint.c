#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the start of a list
 * @index: index of the node, starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *node;

	if (head == NULL)
		return (NULL);
	current = head;
	i = 1;
	while (current->next != NULL && i < (index + 1))
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL && i < (index + 1))
		return (NULL);
	else if (current && i == (index + 1))
		node = current;
	return (node);
}
