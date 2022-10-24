#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a list of type list_t
 * @str: pointer to a string
 * Return: pointer to newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *lastnode;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}
		lastnode->next = ptr;
	}
	return (ptr);
}
