#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - A function that prints all elemonts of a single linked list
 * @h: pointer to const list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
