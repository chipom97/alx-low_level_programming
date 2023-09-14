#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - entry point
* @i: integer
* Return: Success (0)
*/
void positive_or_negative(int i)
{
/**srand(time(0));
*i = rand() - RAND_MAX / 2;
*Check if number is positive, zero or negative
*/
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
