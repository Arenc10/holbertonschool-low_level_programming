#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
/**
 * print_numbers - A variadic function that prints numbers
 * @separator: Pointer to char
 * @n: unsigned int
 * @...: Other params
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 1; i <= n; i++)
	{
		if (i != n)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	printf("\n");
}
