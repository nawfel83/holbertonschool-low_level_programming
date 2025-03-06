#include "main.h"
#include <stdio.h>

/**
 * main - function where the program starts
 * @argc: size of argv and number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
