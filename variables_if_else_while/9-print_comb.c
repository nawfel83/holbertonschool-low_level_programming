#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;

	for (n = '0'; n < '9'; n++)
	{
		putchar(n + '0');
		if (n < '9')
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
