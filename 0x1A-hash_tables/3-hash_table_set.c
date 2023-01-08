#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key property of new item
 * @value: value property of new item
 * Return: 0 on failure 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *item, *current;
	int i = 0;

	if (!key || ht == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			i = 1;
			break;
		}
		current = current->next;
	}
	if (i == 1)
		return (1);

	current = ht->array[index];
	item = malloc(sizeof(item));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	if (current != NULL)
	{
		/*collision*/
		item->next = current;
	}
	else
		ht->array[index] = item;
	return (1);
}
