#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: numbers
 */

void more_numbers(void)
{
int i, j;
for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
if(i > 9)
{
putchar('0' + (i / 10));
}
putchar('0' + (i %10));
}
putchar('\n');
}
}