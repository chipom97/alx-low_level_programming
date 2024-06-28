#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: integer
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 1; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
