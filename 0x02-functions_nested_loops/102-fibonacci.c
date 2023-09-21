#include "main.h"
#include <stdio.h>
/**
* main - entry point
*
* Return: always (0) success
*/
int main(void)
{
unsigned long long a = 1, b = 2, c;
int count = 2;

printf("%llu, %llu", a, b);
while (count < 50)
{
c = a + b;
if (count < 50)
{
printf(",");
}
printf(" %llu", c);
a = b;
b = c;
count++;
}
printf("\n");
return (0);
}
