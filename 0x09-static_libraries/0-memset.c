#include "main.h"
/**
 * _memset - A function that fills memory with a cnst
 * @s: firs operand a pointer to a char
 * @b: second operand a char
 * @n: unsigned int
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
