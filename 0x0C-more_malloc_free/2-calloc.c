#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: The number of elements
 * @size: The size (in bytes) of each element.
 *
 * Return: A pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
unsigned int total_size;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < total_size; i++)
{
((char *)ptr)[i] = 0;
}
return (ptr);
}
