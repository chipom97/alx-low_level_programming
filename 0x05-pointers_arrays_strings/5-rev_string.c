#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
int index;
char *start = s;
char *end = s;
char temp;

while (*end != '\0')
{
index++;
end++;
}
end--;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
