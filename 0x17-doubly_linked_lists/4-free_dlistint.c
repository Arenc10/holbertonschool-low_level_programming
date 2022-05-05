#include "lists.h"
/**
 * free_dlistint - Function that frees a list
 * @head: the head of a node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
