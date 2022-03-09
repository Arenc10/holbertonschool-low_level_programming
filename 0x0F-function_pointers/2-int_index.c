#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Function that searches an int
 * @array: pointer to int
 * @size: int
 * @cmp:Function that checks
 * Return: Number or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int itr;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (itr = 0; itr < size; itr++)
		{
			if (cmp(array[itr]))
				return (itr);
		}
	}
	return (-1);
}
