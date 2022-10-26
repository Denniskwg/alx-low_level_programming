#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer of a list
 * @n: integer
 * Return: address of newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *nextnode;
	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		nextnode = *head;
		while (nextnode->next != NULL)
		{
			nextnode = nextnode->next;
		}
		nextnode->next = ptr;
	}
	return (ptr);
}
