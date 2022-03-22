#include "lists.h"
/**
 * free_listint2 - Function that frees list and sets head to NULL
 * @head: pointer to pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *new_node, *temp;

	new_node = *head;

	while (new_node != NULL)
	{
		temp = new_node;
		new_node = new_node->next;
		free(temp);
	}
	*head = (NULL);
}
