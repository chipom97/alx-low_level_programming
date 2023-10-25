#include "main.h"

/**
 * wildcmp - Compares two strings with wildcards.
 * @s1: The first string to compare.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
return (*s1 == '\0');
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
while (*s1 != '\0')
{
if (wildcmp(s1, s2 + 1))
return (1);
s1++;  /* Move to the next character in s1. */
}
return (wildcmp(s1, s2 + 1));
}
if (*s1 == *s2 || *s2 == '?')
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
