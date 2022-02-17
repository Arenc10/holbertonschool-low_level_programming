#include "main.h"
/**
 * leet - Function that changes string to nr
 * @str: First operand
 * Return: Always 0 (Success)
 */
char *leet(char *str)
{
	char characters[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; characters[j] != '\0'; j++)
		{
			if (str[i] == characters[j])
				str[i] = num[j];
		}
	}
	return (str);
}
