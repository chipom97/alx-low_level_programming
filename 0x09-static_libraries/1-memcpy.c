#include "main.h"

/**
* _memcpy - function that copies memory area
* @dest: destination string
* @src: source string
* @n: integer
* Return: Pointer to string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

char *og_dest = dest;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (og_dest);
}
