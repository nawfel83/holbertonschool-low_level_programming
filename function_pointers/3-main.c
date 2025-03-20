#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if successful, an error code otherwise
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(num1, num2);
	printf("%d\n", result);

	return (0);
}
