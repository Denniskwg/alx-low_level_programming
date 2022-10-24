#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to a list_t
 * Return: number of nodes of type list_t
 */
size_t print_list(const list_t *h)
{
	unsigned long i;
	const list_t *ptr;
	char *s;
	unsigned int j;

	if (h == NULL)
		return (0);
	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		s = ptr->str;
		j = ptr->len;
		if (s == NULL)
		{
			j = 0;
			s  = "(nil)";
		}
		printf("[%u]", j);
		printf(" %s\n", s);
		ptr = ptr->next;
	}
	return (i);
}
