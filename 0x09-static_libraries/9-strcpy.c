#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest.
 * @dest: destiantion buffer
 * @src: source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}
