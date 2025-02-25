#include <unistd.h>
#include <stdio.h>
/**
 * print_diagonal - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 *
 *@n: frjfnuhuyguigujkns
 */
void print_diagonal(int n)
{
        int y;
        int x;
        if (n <= 0)
        {
        _putchar('\n');
        }
        else
        {
        for (y = 0; y < n; y++)
        {
        for (x = 0; x < y; x++)
        {
        _putchar(32);
        }
        _putchar(92);
        _putchar('\n');
        }
        }
}
