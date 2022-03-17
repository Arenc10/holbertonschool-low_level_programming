#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Function that frees a list
 * @head: First operand pointer to list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
