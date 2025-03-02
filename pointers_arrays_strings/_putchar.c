#include "main.h"
#include <unistd.h>

/**
 * _putchar - écrit un caractère sur la sortie standard.
 * @c: Le caractère à écrire.
 *
 * Retourne: 1 si succès, -1 en cas d'erreur.
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}
