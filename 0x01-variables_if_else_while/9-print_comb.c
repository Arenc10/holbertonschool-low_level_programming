#include <stdio.h>
/**
 * main - Print all combinations of single digits nums
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');

	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
