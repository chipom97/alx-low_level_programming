#include <stdio.h>
#include "main.h"

/**
 * puts_half - print half string
 * @str: string
 * Return: half string
 */

void puts_half(char *str)
{
int len = 0;
int index;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
index = (len / 2);
}

else
{
index = ((len / 2) + 1);
}

while (str[index] != '\0')
{
putchar(str[index]);
index++;
}
putchar('\n');
}
