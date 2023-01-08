#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	current = ht->array[i];
	printf("{");
	while (i < ht->size)
	{
		if (current)
		{
			if (flag == 1)
				printf(", ");
			temp = current;
			while (temp != NULL)
			{
				printf("'%s : '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			flag = 1;
		}
		i++;
		current = ht->array[i];
	}
	printf("}\n");
}
