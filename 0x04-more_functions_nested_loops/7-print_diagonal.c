#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - diagonal line
 * @n: integer
 * Return: diagonal line
 */

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= (i - 1); j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
else
{
putchar('\n');
}
}
