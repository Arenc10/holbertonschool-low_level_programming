#include "main.h"
/**
 * flip_bits - A function that shows how bits you need to flip to go from ato b
 * @n: First operand
 * @m: Second operand
 * Return: Number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	unsigned long int count = 0;

	bits = n ^ m;
	while (bits)
	{
		if (bits & 1)
			count++;
		bits = bits >> 1;
	}
	return (count);
}
