#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function returns a pointer to the allocated memory
 * @b: First operand unsigned int
 * Return: A pointer or a NULL
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
