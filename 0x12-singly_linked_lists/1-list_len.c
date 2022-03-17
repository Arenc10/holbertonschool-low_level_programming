#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Function that returns length of a single linked list
 * @h: Pointer to const list_t
 * Return: An int which is the size of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
