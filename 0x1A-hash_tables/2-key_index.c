#include "hash_tables.h"
/**
 * key_index - Function that return index of the key
 * @key: tke key in which the index is gonna calculate
 * @size: The size of the hash table
 * Return: Index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	index = hash % size;
	return (index);
}
