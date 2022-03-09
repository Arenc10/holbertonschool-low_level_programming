#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - A function that executes a function
 * @array: A pointer to int
 * @size: Second operand
 * @action: third operand
 * Return: Always 0 (Success)
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t itr;

	if (array && action)
	{
		for (itr = 0; itr < size; itr++)
		action(array[itr]);
	}
}
