#include <stdio.h>
/**
* main - entry point
*
* Return: always (0) success
*/
#include <stdio.h>
int main(void)
{
unsigned long a = 1, b = 2, c, sum = 2;
int count = 2;

while (count < 50)
{
c = a + b;
if (c > 4000000)
{
break;
}
if (count < 50)
a = b;
b = c;
if (c % 2 == 0)
{
sum += c;
}
count++;
}
printf("%lu", sum);
printf("\n");
return (0);
}
