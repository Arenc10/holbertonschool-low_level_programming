#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of data
 * @head: First node
 * Return: Return the sum of a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
