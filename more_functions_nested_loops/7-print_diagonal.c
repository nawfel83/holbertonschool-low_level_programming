#include <unistd.h>
#include <stdio.h>

/**
 * print_diagonal - Prints a diagonal line using '\' character.
 * @n: The number of lines in the diagonal.
 *
 * Description: Each line starts with an increasing number of spaces
 * followed by a '\' character. If `n` is 0 or less, only a newline is printed.
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
