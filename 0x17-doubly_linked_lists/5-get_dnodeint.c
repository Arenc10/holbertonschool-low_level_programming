#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at the given index
 * @head:Node
 * @index: unsigned int
 * Return: Return the nth node or NULL if it doesent exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}
	return (head);
}
