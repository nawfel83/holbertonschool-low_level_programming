#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: the string to copied
 * Return: cpy the string copied
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		cpy[i] = str[i];
	}

	return (cpy);
}
