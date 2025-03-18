#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char * as argument.
 *
 * Description: This function takes a string (name) and a function pointer (f).
 * It calls the function pointed to by f, passing name as an argument.
 * This allows for different ways of printing the name, depending on the
 * function provided (e.g., printing as is, printing in uppercase).
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
