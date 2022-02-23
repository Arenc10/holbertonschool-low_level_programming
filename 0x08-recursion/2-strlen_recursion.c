#include "main.h"
/**
 * _strlen_recursion - A function that prints length
 * @s: First operand a pointer to char
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
