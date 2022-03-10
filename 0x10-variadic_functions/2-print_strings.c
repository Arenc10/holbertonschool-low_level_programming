#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - A variadic function that prints strings
 * @separator: first operand pointer to char
 * @n:Second operand an int
 * @...:Third operand other params
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *currentWord;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		currentWord = va_arg(ap, char*);
		if (currentWord == NULL)
			printf("(nil)");
		else
			printf("%s", currentWord);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
