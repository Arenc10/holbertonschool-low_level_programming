#include "main.h"
/**
 * print_last_digit - function that prints last digit
 * @i: integer where value is stored
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int r = i % 10;
	
	_putchar(r + '0');
	return (r);
	
}
