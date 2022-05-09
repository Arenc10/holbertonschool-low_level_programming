#include "main.h"
/**
 * _strcat - funcion that concatenates two strings together
 * @dest: first operand an array of chars
 * @src: second operand an array of chars
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
