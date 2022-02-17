#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: first operand a char
 * @src: second operand a char
 * @n: third operand an int
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);

}
