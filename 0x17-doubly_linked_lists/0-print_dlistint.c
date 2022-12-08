#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a doubly
 * linked list
 * @h: pointer to a node in a doubly linked list
 * Return: number of elements in doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	const dlistint_t *ptr;
	unsigned long i = 0;

	if (!h)
		return (i);
	ptr = h;
	current = h->next;
	if (current == NULL)
	{
		i++;
		printf("%d\n", ptr->n);
	}
	else
	{
		current = current->prev;
		while (current != NULL)
		{
			printf("%d\n", current->n);
			i++;
			current = current->next;
		}
	}
	return (i);
}
