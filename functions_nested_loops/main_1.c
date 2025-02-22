#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');  // Devrait afficher 0
    _putchar(r + '0');
    r = _islower('o');  // Devrait afficher 1
    _putchar(r + '0');
    r = _islower(108);  // Devrait afficher 1 ('l' en ASCII)
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
