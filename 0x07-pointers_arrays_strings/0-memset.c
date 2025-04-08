#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the address of memory to fill
 * @n: the size of the memory to fill
 * @b: byte to fill the memory
 *
 * Return: buffer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *og_s = s;
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (og_s);
}
