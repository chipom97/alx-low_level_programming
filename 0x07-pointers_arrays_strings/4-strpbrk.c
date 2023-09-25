#include <stdio.h>
/**
*  _strpbrk - function that searches a string for any of a set of bytes
* @accept: string
* @s: string
* Return: pointer or null
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}
