#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print_data - struct
 *@type: first operand
 *@print: second operand
 */
typedef struct print_data
{
	char *type;
	void (*print)(va_list arg_list);
} print_data;
#endif
