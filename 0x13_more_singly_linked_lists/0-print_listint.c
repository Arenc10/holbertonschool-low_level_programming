#include "lists.h"
/**
 * print_listint - Function that prints all elements of a list
 * @h: Pointer to const list
 * Return: An int or 0
 */
size_t print_listint(const listint_t *h)
{
	int nodeCount = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}
