#include "lists.h"
/**
 * add_dnodeint - Function that adds a node at the beginning of a list
 * @n: Data of the node
 * Return: The address of the new elemnt of NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
