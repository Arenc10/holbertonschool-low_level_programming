#include "main.h"
/**
 * _puts - Function that prints string
 * @str: first operand a character
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
