#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: is the hash table you want to add or update
 * @key: key is the key and cant be an empty string
 * @value: Value is the value associated wit the key
 * Return: On success return 1 othewise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *node;
	unsigned long int idx;
	
	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
