#include "lists.h"
/**
 * pop_listint - Function that deletes the head node
 * @head: First operand a pointer to pointer
 * Return: The head node data
 */
int pop_listint(listint_t **head)
{
	int result;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);
	node = *head;
	result = (*head)->n;
	(*head) = (*head)->next;
	free(node);
	return (result);
}
