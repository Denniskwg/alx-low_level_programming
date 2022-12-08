#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		head = ptr->next;
		free(ptr->prev);
		free(ptr);
		ptr = head->next;
	}
	free(head);
}
