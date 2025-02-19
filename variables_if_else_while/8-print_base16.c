#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;
	int n;

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
