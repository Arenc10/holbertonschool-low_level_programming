#include "main.h"
/**
 * cap_string - function that capitalizes all words
 * @str: first operand a char
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] == ' ' ||
		   str[i] == '\t' ||
		   str[i] == '\n' ||
		   str[i] == ',' ||
		   str[i] == ';' ||
		   str[i] == '.' ||
		   str[i] == ',' ||
		   str[i] == '.' ||
		   str[i] == '!' ||
		   str[i] == '?' ||
		   str[i] == ')' ||
		   str[i] == '(' ||
		   str[i] == '{' ||
		   str[i] == '}' ||
		   str[i] == '"')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
