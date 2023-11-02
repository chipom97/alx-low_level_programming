#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers
 * @min: The minimum value
 * @max: The maximum value
 *
 * Return: A pointer to array or NULL on failure
 */
int *array_range(int min, int max)
{
int *array;
int size, i;
if (min > max)
return (NULL);
size = max - min + 1;
array = (int *)malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
