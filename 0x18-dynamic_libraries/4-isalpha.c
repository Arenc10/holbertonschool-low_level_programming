#include "main.h"
/**
 * _isalpha - a function that checks
 * Description: A function which checks alplhanumeric values
 * @c: first operand an integer
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
