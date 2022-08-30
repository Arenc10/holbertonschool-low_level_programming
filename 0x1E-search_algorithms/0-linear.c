#include "search_algos.h"
/**
 * int linear_search - Fucntion that searches for a value using linear search
 * @array: The array used for iteration
 * @size: Size of the array
 * @value: Value to search for
 * Return: Return -1 if it fails or Value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
