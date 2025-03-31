#include "main.h"

/**
 * print_times_table - print times table
 * @n: integer
 * Return: Always 0.
 */

void print_times_table(int n)
{
int row, col, p, p1, p2, p0;

if  (!(n < 0 || n > 15))
{
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
p = (row * col);
p2 = (p % 10);
if (p >= 100)
{
p0 = (p / 100);
p1 = ((p / 10) % 10);
{
_putchar(',');
_putchar(' ');
_putchar('0' + p0);
_putchar('0' + p1);
_putchar('0' + p2);      
} 
}
else if (p >= 10)
{
p1 = (p / 10);
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + p1);
_putchar('0' + p2);
} 
}
else
{
if (col == 0)
{
_putchar('0' + p);
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar('0' + p);
}
}
}
_putchar('\n');
}
}
}
