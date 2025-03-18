#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to execute on each element.
 *
 * Description: This function iterates through an array and applies the
 * function pointed to by `action` on each element. If `array` or `action`
 * is NULL, the function does nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
