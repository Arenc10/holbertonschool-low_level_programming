#include "main.h"
/**
 * _islower(int c)- a function that checks lowercase
 * Description: A function that checks lowercase while using islower function
 * @c: First operand an integer
 * Return: Always 0 (Succes)
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	return (1);
	else
	return (0);
}
