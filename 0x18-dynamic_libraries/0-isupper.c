#include "main.h"
/**
 * _isupper - Function that checks for uppercase letters and has one parameter
 * @c: first operand an integer
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
