#include "main.h"

/**
 * _strncat - Concatenates two strings using at most `n` bytes from `src`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to append from `src`.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_d, len_s, condition;
	char *original_dest = dest;

	len_d = 0;
	len_s = 0;

	while (dest[len_d] != '\0')
	{
		len_d++;
	}
	while (src[len_s] != '\0')
	{
		len_s++;
	}
	if (n > len_s)
	{
		condition = len_s;
	}
	else
	{
		condition = n;
	}
	for (i = 0; i < condition; i++)
	{
		dest[len_d + i] = src[i];
	}
	dest[len_d + condition] = '\0';

	return (original_dest);
}
