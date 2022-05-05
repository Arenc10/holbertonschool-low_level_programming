#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts node at given index
 * @h: Node
 * idx: Unsigned int
 * n: int
 * Return: The address of a new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	temp = *h;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		add_dnodeint(&new, n);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
		add_dnodeint_end(&new, n);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
