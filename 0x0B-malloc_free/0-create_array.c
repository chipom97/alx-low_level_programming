#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* create_array - creates an array of chars
* @size: size of array
* @c: character
* Return: array or NULL
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
