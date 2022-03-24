#include "main.h"
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: First operand a pointer to int
 * @index: Second operand the index
 * Return: Return 1 if it wrks -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(*n) * 8);

	if (index > size)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
