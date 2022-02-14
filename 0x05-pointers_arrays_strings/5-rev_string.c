#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: first operand a character
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i, j, tmp;

	i = 0;

	while (s[i] != '\0')
		i++;
	i = i - 1;
	j = 0;

	while (j < i && j != i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
		i--;
	}
}
