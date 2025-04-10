#include "main.h"

/**
 * is_prime_helper - checks if a number is prime recursively
 * @n: number to check
 * @i: current divisor to check
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
