#include "lists.h"
/**
 * add_nodeint - Function that adds a node to the beginning of a linked list
 * @head: First operand pointer to pointer
 * @n: Second operand an int
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
