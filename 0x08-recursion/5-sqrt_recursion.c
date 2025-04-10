#include "main.h"

/**
 * sqrt_helper - helps find the square root recursively
 * @n: the number to find the square root of
 * @i: current guess for the square root
 * Return: square root of n or -1 if no natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: square root of n or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
