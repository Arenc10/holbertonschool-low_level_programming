#include "main.h"
/**
 * swap_int - a function that swaps the two operands
 * @a: first operand an integer
 * @b: second operand an integer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
