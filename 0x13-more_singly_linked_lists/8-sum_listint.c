#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to first node of a list
 * Return: sum of all data member n of a list
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	sum = current->n;
	while (current->next != NULL)
	{
		current = current->next;
		sum += current->n;
	}
	return (sum);
}
