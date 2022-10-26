#include "lists.h"
#include <stdlib.h>

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	unsigned long i;
	if (h == NULL)
		return (0);
	current = h;
	i = 0;
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
