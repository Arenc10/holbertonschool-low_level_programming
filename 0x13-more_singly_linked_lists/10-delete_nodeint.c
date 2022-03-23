#include "lists.h"
/**
 * delete_nodeint_at_indext - A function that deletes a node at a given index
 * @head: firs operand a pointer to pointer
 * @index: The index where we want to delete a node an int
 * Return: Return 1 if succcess return -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *delete = *head;
	unsigned int i;

	if (delete == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	i = 0;
	while (i < (index - 1))
	{
		if (delete == NULL || delete->next == NULL)
			return (-1);
		delete = delete->next;
		i++;
	}
	tmp = delete->next;
	delete->next = tmp->next;
	free(tmp);
	return (1);
}
