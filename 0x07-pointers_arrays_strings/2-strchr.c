#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: first operand points to an char
 * @c: second operand a char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
