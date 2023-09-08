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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Check if number is positive, zero or negative*/
	if (n > 0)
	{
	printf(n, "is positive\n");
	}
	else if (n == 0)
	{
	printf(n, "is zero\n");
	}
	else
	{
	printf(n, "is negative\n");
	}
	return (0);
}
