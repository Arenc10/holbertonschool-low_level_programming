#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of ints
 * @min: first operand
 * @max: second operand
 * Return: A pointer to an arr or NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int length;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	array = malloc(length * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length; i++, min++)
		array[i] = min;
	return (array);
}
