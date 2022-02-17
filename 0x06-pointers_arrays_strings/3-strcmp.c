#include "main.h"
/**
 * _strcmp - A function that compares two strings
 * @s1: first operand an int
 * @s2: second operand an int
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			diff = s1 - s2;
			break;
		}
		else
			diff = 0;
	return (diff);
}
