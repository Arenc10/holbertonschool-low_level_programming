#include "main.h"
/**
 * jack_bauer - Function that prints every minute of the day
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= 2 && j <= 3)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
