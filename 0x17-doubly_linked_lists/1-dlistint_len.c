#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a
 * doubly linked list
 * @h: pointer to a node of a doubly linked list
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	unsigned long i = 0;

	if (h == NULL)
		return (i);
	current = h->next;
	if (current == NULL)
		i++;
	else
	{
		current = current->prev;
		while (current != NULL)
		{
			i++;
			current = current->next;
		}
	}
	return (i);
}
