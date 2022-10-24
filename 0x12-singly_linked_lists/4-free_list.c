#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t list
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		free(ptr->str);
		head = head->next;
		free(ptr);
	}
}
