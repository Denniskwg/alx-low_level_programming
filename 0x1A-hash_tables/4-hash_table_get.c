#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_get - returns value associated with a key in a 
 * hash table
 * @ht: hash table to look at
 * @key: key to search for
 * Return: value associated with key or null if no key found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	if (current->next == NULL)
		return (current->value);
	while (current != NULL)
	{
		if (strcmp(key, current->key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
