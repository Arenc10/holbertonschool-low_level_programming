#include "main.h"
/**
 * puts2 - function that prints every even char
 * @str: First operand a character
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	i++;
	}
	_putchar('\n');
}
