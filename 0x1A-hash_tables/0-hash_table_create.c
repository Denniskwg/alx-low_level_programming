#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table with members
 * size and array
 * @size: size is the lenght of hash table member array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
