#include "main.h"

/**
* _puts - Prints a string followed by a new line
* @str: Pointer to the string
*/
void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
}
