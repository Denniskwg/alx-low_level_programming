#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		if (current)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			while ((current = current->next) != NULL)
			{
				printf(", ");
				printf("'%s : '%s'", current->key, current->value);
			}
			flag = 1;
		}
	}
	printf("}\n");
}
