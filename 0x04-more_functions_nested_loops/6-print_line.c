#include <stdio.h>
#include "main.h"

/**
 * print_line - draw a straight line
 * @n: integer
 * Return: line
 */

void print_line(int n)
{

if (n > 0)
{
while (n != 0)
{
putchar('_');
n--;
}
putchar('\n');
}
else
{
putchar('\n');
}
}