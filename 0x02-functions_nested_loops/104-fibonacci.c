#include "main.h"
#include <stdio.h>
/**
* main - entry point
*
* Return: always (0) success
*/
int main(void)
{
unsigned long a = 1, b = 2, c;
int count = 2;

printf("%lu, %lu", a, b);
while (count < 85)
{
c = a + b;
if (count < 85)
{
printf(",");
}
printf(" %lu", c);
a = b;
b = c;
count++;
}
printf("\n");
return (0);
}
