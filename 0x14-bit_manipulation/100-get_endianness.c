#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 * Return: Return 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	unsigned int bit = 1;
	char *c = (char *) &bit;

	return ((int)*c);
}
