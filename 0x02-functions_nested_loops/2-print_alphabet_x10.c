#include "main.h"
/**
 * print_alphabet_x10 - function that prints alphabet
 * Description: A function that prints the alphabet 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 1;
	
	while (i <= 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
