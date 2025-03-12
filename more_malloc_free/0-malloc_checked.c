#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: positive integer
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *test;

	test = malloc(b);

	if (test == NULL)
	{
		exit(98);
	}
	return (test);
}
