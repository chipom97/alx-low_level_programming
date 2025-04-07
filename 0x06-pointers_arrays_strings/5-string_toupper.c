#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	char *og_s = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (og_s);
}
