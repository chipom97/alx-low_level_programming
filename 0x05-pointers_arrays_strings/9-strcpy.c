#include "main.h"
#include <stdio.h>
/**
*print_array - Prints n elements of an array
* @a: Pointer to the array of integers
* @n: Number of elements to print
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
