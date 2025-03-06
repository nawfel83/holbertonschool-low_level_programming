#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function where the program starts
 * @argc: size of argv and number of command line arguments
 * @argv: array containing the program command line arguments
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
