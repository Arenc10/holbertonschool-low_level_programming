#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data
 * @head: pointer to listint
 * Return: Return the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
