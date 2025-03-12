#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the newly allocated space in memory with s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		result[i] = s1[i];

	for (j = 0 ; j < len2 ; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
