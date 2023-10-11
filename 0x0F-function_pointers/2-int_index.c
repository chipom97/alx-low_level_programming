#include <stddef.h>
/**
* int_index - searches for an integer
* @array: pointer to the array
* @size: number of elements
* @cmp: pointer to compare values
*
* Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
