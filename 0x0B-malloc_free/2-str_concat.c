#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int k = 0, l = 0;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	new_string = malloc((len1 + len2 + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	while (k < len1)
	{
		new_string[k] = s1[k];
		k++;
	}

	while (l < len2)
	{
		new_string[k] = s2[l];
		k++;
		l++;
	}

	new_string[len1 + len2] = '\0';

	return (new_string);
}
