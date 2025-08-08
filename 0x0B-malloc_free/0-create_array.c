#include <stdlib.h>

/**
 * create_array - create array
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: new array.
 */

char *create_array(unsigned int size, char c)
{
	char *new_array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	new_array = malloc(size * sizeof(char));
	if (new_array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		new_array[i] = c;
		i++;
	}

	return (new_array);
}
