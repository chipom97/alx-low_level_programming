#include "main.h"

/**
* _strcpy - Prints n elements of an array
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
