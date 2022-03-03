#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocatemem for an array
 * @nmemb: First operand unsigned int
 * @size: Second operand unsigned int
 * Return: A pointer to the alloc memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
