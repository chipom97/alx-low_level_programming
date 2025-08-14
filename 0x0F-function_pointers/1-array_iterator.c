#include "function_pointers.h"

/**
 * array_iterator - loop through array
 * @array: array
 * @size: size
 * @action: action
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
