#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: First operand a pointer
 * @index: Second operand an int
 * Return: Return 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(*n) * 8);

	if (size < index)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
