#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A function that returns an array
 * @size: first operand unsigned int
 * @c: second operand an char
 * Return: Returns a pointer or null
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
