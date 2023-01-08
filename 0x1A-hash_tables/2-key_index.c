#include "hash_tables.h"
#include <stddef.h>
/**
 * key_index - returns the index to insert a new item in a hash table
 * @key: key property of new element
 * @size: size of the array of the hash table
 * Return: index to place element in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t hash;

	hash = hash_djb2(key);
	return (hash % size);
}
