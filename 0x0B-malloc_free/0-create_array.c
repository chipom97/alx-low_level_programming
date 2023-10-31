#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Allocates memory
 * @size: The size of the array
 * @c: The character
 *
 * Return: A pointer
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)
{
return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
