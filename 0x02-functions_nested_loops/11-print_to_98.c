#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints to 98
 * @n: integer that goes into the function
 * Return: n (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("%d\n", n);
}
