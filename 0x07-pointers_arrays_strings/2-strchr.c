#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character to locatw
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
			return (s);
		}
		s++;
	}
	return (s);
}
