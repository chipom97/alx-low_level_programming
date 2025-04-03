#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (i = 0; i < len; i++, len--)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
