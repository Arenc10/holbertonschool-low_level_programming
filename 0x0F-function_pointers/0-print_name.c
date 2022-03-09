#include "function_pointers.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * print_name - A function that prints a name
 * @name: First operand pointer to char
 * @f: Second operand an pointer to func
 * Return: Always 0 (Success)
 */
void print_name(char *name, void(*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
