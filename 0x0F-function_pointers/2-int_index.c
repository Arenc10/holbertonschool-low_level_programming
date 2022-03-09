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

	if (array || cmp)
	{
		for (int = 0; int < size; i++)
		{
			if (cmp(array[itr]))
				return (i);
		}
	}
	return (-1);
}
