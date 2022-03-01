#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Functin that returns a pointer to new space
 * @str: A pointer to a char
 * Return: A pointer or Null
 */
char *_strdup(char *str)
{
	int i;
	char *cpy;
	int length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		length++;
	cpy = malloc((length + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	return (cpy);
}
