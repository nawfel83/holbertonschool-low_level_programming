#include "main.h"

/**
 * _pow_recursion - function that returns power of numbers
 * @x: 1st number
 * @y: 2nd number
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
