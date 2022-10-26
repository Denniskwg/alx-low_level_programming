#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * deletes the head node of a listint_t linked list
 * @head: pointer to the head of a linked list
 * Return: head node's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (i);
}
