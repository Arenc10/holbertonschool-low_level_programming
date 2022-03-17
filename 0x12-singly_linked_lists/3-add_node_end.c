#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: pointer to pointer first operand
 * @str: pointer to char
 * Return: Return new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (str == NULL || new->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i = 0;
		while (new_node->str[i] != '\0')
			i++;
		new_node->str = i;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		first = *head;
		while (first->next != NULL)
			first = first->next;
		first->next = new_node;
		return (new_node);
	}
	return (NULL);
}
