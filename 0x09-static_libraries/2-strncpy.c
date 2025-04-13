#include "main.h"

/**
 * _strncpy - Copy up to n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 *
 * Return: The pointer to the destination string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	char *og_dest = dest;

	while (src[len] != '\0')
	{
		len++;
	}

	while (n > 0)
	{
		if (len > 0)
		{
			*dest = *src;
			dest++;
			src++;
			len--;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
		n--;
	}
return (og_dest);
}
