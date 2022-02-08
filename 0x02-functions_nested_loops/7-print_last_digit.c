#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @i: integer where value is stored
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int lastdigit;

	if (i < 0)
	{
		lastdigit = (i % 10) * -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
