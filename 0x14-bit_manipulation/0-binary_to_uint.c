#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: Pointer to char
 * Return: Return the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int weight = 1;
	int i, len = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum = sum + weight;
		weight = weight * 2;
	}
	return (sum);
}
