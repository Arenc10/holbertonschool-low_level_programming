#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: First operand an integer
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
