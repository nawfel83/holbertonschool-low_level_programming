#include "main.h"

/**
 * factorial - function that returns factorial
 * @n: the given number for factorial
 * Return: result of factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
