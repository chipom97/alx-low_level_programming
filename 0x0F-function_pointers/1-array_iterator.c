#include <stdio.h>

/**
 * array_iterator - Applies a function to each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A pointer to the function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
