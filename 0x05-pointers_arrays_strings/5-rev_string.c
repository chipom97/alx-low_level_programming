#include "main.h"
#include <stdio.h>
/**
* rev_string - Reverses a string
* @s: Pointer to the string
*/
void rev_string(char *s)
{
int length = 0;
if (s != NULL)
{
char *start = s;
char *end = s;
while (*end != '\0')
{
length++;
end++;
}
end--;
while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
}
