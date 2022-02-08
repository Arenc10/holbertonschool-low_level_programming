#include "main.h"
/**
 * print_alphabet - Function that prints alphabet
 * Description: A function that prints alphabet while using putchar
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
