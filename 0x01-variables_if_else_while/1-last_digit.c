#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	/*Last digit*/
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	/*BLOCK*/
	if (d > 0)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	return (0);
	}
