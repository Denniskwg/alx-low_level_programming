#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to beggining of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned long i;
	const listint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
