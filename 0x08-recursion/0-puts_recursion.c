#include "main.h"
#include <stdio.h>
/**
* _puts_recursion -  function that prints a string
*
* @s: string
*/
void _puts_recursion(char *s)
{
if (s == NULL || *s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
