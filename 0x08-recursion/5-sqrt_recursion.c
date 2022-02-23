#include "main.h"
/**
 * find_sqrt - function that returns the natural sqrt
 * @n: First operand an int
 * @root: Second operand an int
 * Return: Always 0 (Success)
 */

int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (find_sqrt(n, root + 1));
}
/**
 * _sqrt_recursion - helper function
 * @n: first operand
 * Return: Always 0 (Sucess)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 0));
}
