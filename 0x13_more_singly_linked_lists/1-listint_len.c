#include "lists.h"
/**
 * listint_len - A function that returns the number of elements in linked list
 * @h: Pointer to const listint
 * Return: Return an int or 0
 */
size_t listint_len(const listint_t *h)
{
	int nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
