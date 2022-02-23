#include "main.h"
/**
 * _puts_recursion - A function that prints a string followed by a newline
 * @s: First operand a pointer to a char
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
