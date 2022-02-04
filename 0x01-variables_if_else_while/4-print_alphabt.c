#include <stdio.h>
/**
 * main - Print the alphabet besides e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	}
	putchar('\n');

	return (0);
}
