#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that finds the firs occurents of the substring needle
 * in the string haystack
 * @haystack: pointer to the main string
 * @needle: pointer to the substring in haystack
 * Return: NULL if needle not found,
 * pointer to the beginning of the located substring in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
