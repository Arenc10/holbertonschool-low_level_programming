#include "main.h"
/**
 * print_line - A function that prints line
 * @n: First operand an integer
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
