#include "main.h"

/**
 * primenumber - function that check if the number is prime or not
 * @n: the number
 * @x: the divisor
 * Return: 1 if prime 0 if not
 */

int primenumber(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (x * x > n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (primenumber(n, x + 1));
}

/**
 * is_prime_number - function that check if number is prime
 * @n: the number
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	return (primenumber(n, 2));
}
