#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = abs(n) % 10;

	printf("Last digit of %d is %d", n, ld);
	printf(" and is ");

	if (ld > 5)
	{
		printf("greater than 5\n");
		}
	else if (ld == 0)
	{
		printf("0\n");
		}
	else if (ld < 6 && ld != 0)
	{
		printf("less than 6 and not 0\n");
		}

	return (0);
}
