#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Function that adds a node to the beginning of a list
 * @head: pointer to pointer
 * @str: Second operand
 * Return: Return list_t argument
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL || str == NULL)
		return (NULL);
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
			count++;
		new_node->len = count;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);

}
