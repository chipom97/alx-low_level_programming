#include "main.h"

/**
 * _strcat - function appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 * Return: modified destination string
 */
char *_strcat(char *dest, char *src)
{
	int len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (*src != '\0')
	{
		dest[len] = *src;
		src++;
		len++;
	}
	dest[len++] = '\0';
	return (dest);

}
