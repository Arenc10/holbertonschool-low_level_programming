#include "main.h"
/**
 * reverse_array - A function that reverses an array of ints
 * @a: first operand an int
 * @n: second operand an int
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++;)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
