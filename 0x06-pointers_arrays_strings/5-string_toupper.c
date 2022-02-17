#include "main.h"
/**
 * string_toupper - A function that converts a string to uppercase
 * @str: first operand a char
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
