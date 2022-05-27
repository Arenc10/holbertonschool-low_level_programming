#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: Unsigned long int
 * Return: Returns a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);
	return (h);
}
