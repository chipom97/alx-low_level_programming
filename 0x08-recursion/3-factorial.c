#include "main.h"

/**
 *  factorial - returns the factorial of a given number
 * @n: integer
 * Factorial of 0 is 1
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
