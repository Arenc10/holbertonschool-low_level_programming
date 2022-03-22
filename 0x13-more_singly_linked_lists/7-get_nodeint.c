#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: First operand pointer to listint_t
 * @index: Second operand an unsigned int
 * Return: Return the node or NULL if node doesent exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int count = 0;

	while (node != NULL)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;

	}
	return (NULL);
}
