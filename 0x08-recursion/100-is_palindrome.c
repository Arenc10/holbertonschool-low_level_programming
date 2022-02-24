#include "main.h"
/**
 * check_palindrome - function that chekcs whether is palindrome or not
 * @s: First operand a pointer to a char
 * @idx: Second operand an int
 * @length: Third operand an int
 * Return: Always 0 (success)
 */
int check_palindrome(char *s, int idx, int length)
{
	if (s[idx] == s[length / 2])
		return (1);
	if (s[idx] == s[length - idx - 1])
		return (check_palindrome(s, idx + 1, length));
	return (0);
}
/**
 * find_length - function that finds the length
 * @s: first operand a pointer ot  a char
 * Return: Always 0 Success
 */
int find_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + find_length(s + 1));
}
/**
 * is_palindrome - A function that tells if it is or not palindrome
 * @s: first operand a pointer to a a char
 * Return: check_palindrome a function
 */
int is_palindrome(char *s)
{
	int idx = 0;
	int length = find_length(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, idx, length));
}
