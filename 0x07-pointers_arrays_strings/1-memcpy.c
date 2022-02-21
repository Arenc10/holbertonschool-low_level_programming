#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: First operand a pointer that points to a char
 * @src: Second operand a pointer that points to a char
 * @n: Third operand unsigned int
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
