#include "main.h"
/**
 * _strncat - A fucntion that concatenates
 * @dest: first operand a char
 * @src: second operand a char
 * @n: third operand an int
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (j = 0; src[j] != '\0' && j < n; ++j, ++i)
	{
		dest[i] = src[j];
	}
	return (dest);
}
