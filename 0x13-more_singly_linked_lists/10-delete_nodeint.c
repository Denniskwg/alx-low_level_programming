#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a linked list
 * @head: pointer to a pointer of a list
 * @index: index of the node that should be deleted.
 * index starts at 0
 * Return: 1 if success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;
	i = 1;
	while (current->next != NULL && i < (index + 1))
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	if (current->next == NULL && i < (index + 1))
		return (-1);
	else if (current->next != NULL && i == (index + 1))
	{
		prev->next = current->next;
		free(current);
		current = NULL;
	}
	else if (current->next == NULL && i == (index + 1))
	{
		prev->next = NULL;
		free(current);
		current = NULL;
	}
	return (1);
}
