#include "main.h"
/**
 * isPrime - check for prime nr
 * @n: first operand
 * @i: second operand
 * Return: Always 0 (Success)
 */
int isPrime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	return (prime(n, i + 1));
}
/**
 * is_prime_number - Calling other functiont
 * @n: First operand an int
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
