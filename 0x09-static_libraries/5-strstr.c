#include <stdio.h>
/**
*  _strstr - function that locates a substring
* @haystack: string
* @needle: substring
* Return: pointer or null
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
