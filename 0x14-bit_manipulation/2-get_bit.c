#include "main.h"
/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: First operand unsigned long int
 * @index: Second operand unsigned int
 * Return: Return the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitValue;
	unsigned long int size = (sizeof(n) * 8);

	if (index > size)
		return (-1);
	if (n > 0)
		bitValue = (n >> index) & 1;
	return (bitValue);
}
