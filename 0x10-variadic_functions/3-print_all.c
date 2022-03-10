#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_char - function that prints a char
 * @char_list: first operand
 */
void print_char(va_list char_list)
{
	printf("%c", va_arg(char_list, int));
}
/**
 * print_integer - function that prints an int
 * @int_list: first operand
 */
void print_integer(va_list int_list)
{
	printf("%i", va_arg(int_list, int));
}
/**
 * print_float - A function that prints float
 * @float_list: First operand
 */
void print_float(va_list float_list)
{
	printf("%f", va_arg(float_list, double));
}
/**
 * print_string - A function that prints string
 * @string_list: First operand
 */
void print_string(va_list string_list)
{
	char *str;

	str = va_arg(string_list, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
/**
 * print_all - A function that prints anything
 * @format: a constant pointer to char
 * @...: Other params
 */
void print_all(const char *format, ...)
{
	int i, j;
	va_list args_list;
	char *separator = "";
	print_data print_funcs[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (format[i] != *print_funcs[j].type))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			print_funcs[j].print(args_list);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
}
