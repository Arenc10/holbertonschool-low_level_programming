#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first operand a pointer to a char
 * @s2: second operand a pointer to a char
 * @n: third operand unsigned int
 * Return: A pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int j;
	int length;
	char *concat;

	length = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		length++;
	concat = malloc((length + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++, j++)
		concat[j] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++, j++)
		concat[j] = s2[i];
	concat[j] = '\0';
	return (concat);
}
