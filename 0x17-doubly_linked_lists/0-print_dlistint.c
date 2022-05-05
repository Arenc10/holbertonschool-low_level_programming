#include "lists.h"
/**
 * print_dlistint - Function that returns the number of nodes
 * @h: Header pointer
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
