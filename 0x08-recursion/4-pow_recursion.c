#include "main.h"
/**
 * _pow_recursion - function that return the power
 * @x: first operand
 * @y: second operand
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
	if (y < 0)
		return (-1);
}
