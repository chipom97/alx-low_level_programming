#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: positive integer
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new_string = malloc(sizeof(char) * (len1 + n + 1));
	if (new_string == NULL)
		return (NULL);

	/* copy s1 into new_string*/
	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < n; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
