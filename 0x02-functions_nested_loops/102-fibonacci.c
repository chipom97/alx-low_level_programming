#include "main.h"
#include <stdio.h>
/**
* main - entry point
*
* Return: always (0) success
*/
int main(void)
{
long long a = 1, b = 2, c;
int count = 2;

printf("%lld, %lld", a, b);
while (count < 50)
{
c = a + b;
if (count < 50)
{
printf(",");
}
printf(" %lld", c);
a = b;
b = c;
count++;
}
printf("\n");
return (0);
}
