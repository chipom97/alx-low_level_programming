#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  a function that copies memory area.
 * @src: the address of src memory
 * @dest: address of the dest memory
 * @n: the size of the memory to copy
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *og_dest = dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (og_dest);
}
