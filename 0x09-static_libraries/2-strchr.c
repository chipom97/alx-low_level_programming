#include "main.h"

/**
* _strchr - function that locates a character in a string
* @c: character
* @s: string
* Return: NULL
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
