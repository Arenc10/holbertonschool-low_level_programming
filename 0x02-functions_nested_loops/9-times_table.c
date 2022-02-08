#include "main.h"
/**
 * times_table - a function where we print the times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 0; i <= 9; i++)
		{
			k = (i * j);
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
