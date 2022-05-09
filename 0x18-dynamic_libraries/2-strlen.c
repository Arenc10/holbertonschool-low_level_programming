#include "main.h"
/**
 * _strlen - a function that prints string length
 * @s: First operand a character
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
