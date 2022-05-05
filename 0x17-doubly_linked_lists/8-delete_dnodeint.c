#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes a node at given index
 * @head: Node
 * @index: Given index
 * Return: if it succeeds 1 else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp == *head)
	{
		*head = temp->next;
		(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
