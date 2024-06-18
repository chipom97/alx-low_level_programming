#include <stdio.h>
#include "main.h"

/**
 * puts2 - print string
 * @str: string
 * Return: string
 */

void puts2(char *str)
{
int index;

for (index = 0; str[index] != '\0'; index++)
{
if (index % 2 == 0)
{
_putchar(str[index]);
}
}
 putchar('\n');
}
