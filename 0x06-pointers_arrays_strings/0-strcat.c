#include "main.h"
#include <stdio.h>

/**
 *char *_strcat - concatenate two strings
 * @dest: resulting string
 * @src: string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int index = 0;
int copy = 0;

while (dest[index] != '\0')
{
index++;
}

while (src[copy] != '\0')
{
dest[index] = src[copy];
index++;
copy++;
}
dest[index] = '\0';
return (dest);
}
