#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 * Description: A functions which prints the alphabet
 * Return: No return since is "void"
**/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
