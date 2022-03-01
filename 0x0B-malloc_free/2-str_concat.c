#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - A ufnction that will concatenate two strings
 * @s1: first operand pointer points to char
 * @s2: second operand pointer points to a char
 * Return: Concatenated string or Null
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int length = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	for (i = 0; s2[i] != '\0'; i++)
		length++;
	concat = malloc((length + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++, j++)
		concat[j] = s1[i];
	for (i = 0; s2[i] != '\0'; i++, j++)
		concat[j] = s2[i];
	return (concat);
}
