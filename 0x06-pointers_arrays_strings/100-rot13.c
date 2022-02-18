#include "main.h"
/**
 * rot13 - A function that encrypts to rot13
 * @str: first operand a char
 * Return: Always 0 (Success)
 */
char *rot13(char *str)
{
	char alph[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphup[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphup[j] != '\0'; j++)
		{
			if (str[i] == alphup[j])
			{
				str[i] = alph[j];
				break;
			}
		}
	}
	return (str);
}
