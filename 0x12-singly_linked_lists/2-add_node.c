#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer of type list_t
 * @str: pointer to a string to duplicate
 * Return: pointer to newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
