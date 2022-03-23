#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a node at a given index
 * @head: First operand a pointer to pointer
 * @idx: Second operand a unsigned int
 * @n: Value of the node
 * Return: The address of a new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *dup;
	unsigned int i;

	dup = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = dup;
		*head = new;
		return (new);
	}
	i = 0;
	while (i < (idx - 1))
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);
		dup = dup->next;
		i++;
	}
	new->next = dup->next;
	dup->next = new;
	return (new);
}
