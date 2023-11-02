#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i;
char *concatenated;
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
concatenated = (char *)malloc(len1 + n + 1);
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (i = 0; i < n; i++)
concatenated[len1 + i] = s2[i];
concatenated[len1 + n] = '\0';
return (concatenated);
}
