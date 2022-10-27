#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @idx: index of the list where the new node should be added
 * index starts at 0
 * @head: pointer to a pointer of a list
 * @n: integer member
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = *head;
	i = 1;
	while (current->next != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL && i < idx)
		return (NULL);
	else if (current->next == NULL && i == idx)
		return (NULL);
	else if (current->next != NULL && i == idx)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);
		ptr->n = n;
		ptr->next = current->next;
		current->next = ptr;
	}
	return (ptr);
}
