#include "hash_tables.h"
/**
 * key_index - Function that returns the index of a key
 * @key: Key value
 * @size: Size of an array
 * Return: Return the index of a node
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if ((key == NULL) || (size == 0))
		return (0);
	return (hash_djb2(key) % size);
}
