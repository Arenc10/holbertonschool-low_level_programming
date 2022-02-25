#include "main.h"
/**
 * _isdigit - A function that checks whether is a digit or not
 * @c: first operand is an integer
 * Return: Always 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
