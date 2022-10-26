#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - that frees a listint_t list
 * @head: pointer to a list
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
