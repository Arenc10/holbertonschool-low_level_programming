#include "lists.h"
/**
 * add_nodeint_end - Function that adds a node to the end of a linked list
 * @head: Pointer to pointer to listint t
 * @n: A const int
 * Return: Return the address of the new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
