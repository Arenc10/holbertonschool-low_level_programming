#include "lists.h"
/**
 * free_listint - A function that frees list
 * @head: First operand a pointer
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
