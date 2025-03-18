#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Description: This function iterates through the array and applies the
 * function pointed to by `cmp` on each element. It returns the index of the
 * first element for which `cmp` does not return 0.
 * If no match is found or if `size` is 0 or negative, it returns -1.
 * If `array` or `cmp` is NULL, it also returns -1.
 *
 * Return: The index of the first matching element, or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
return (-1);
}
