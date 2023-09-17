#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the times table, starting with 0
* @n: - interger n
*/
void print_times_table(int n)
{
int i, j, result;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
putchar(result + '0');
}
else
{
putchar(',');
putchar(' ');
if (result < 10)
{
putchar(' ');
putchar(' ');
putchar(result + '0');
}
else if (result < 100)
{
putchar(' ');
putchar(result / 10 + '0');
putchar(result % 10 + '0');
}
else if (result > 99)
{
putchar(result / 100 + '0');
putchar(((result / 10) % 10) + '0');
putchar(result % 10 + '0');
}
}
}
putchar('\n');
}
}
}
