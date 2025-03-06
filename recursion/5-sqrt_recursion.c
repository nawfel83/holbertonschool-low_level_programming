#include "main.h"
#include <stdio.h>
/**
 * racine - function that returns the natural square root
 * @n: number
 * @x: the multiplicator
 * Return: the result of racine
 */

int racine(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (racine(n, x + 1));
}

/**
 * _sqrt_recursion - fonction that returns racine
 * @n: number
 * Return: racine result
 */

int _sqrt_recursion(int n)
{
	return (racine(n, 0));
}
