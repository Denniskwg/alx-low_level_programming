#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to the start of a doubly
 * linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL && ptr->next)
	{
		head = ptr->next;
		free(ptr->prev);
		free(ptr);
		ptr = head->next;
	}
	free(head);
}
