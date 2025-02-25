#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	int y;
	int x;

	if (size <= 0)
	{
	_putchar('\n');
	}
		else
		{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
				_putchar('\n');
		}
	}
}
