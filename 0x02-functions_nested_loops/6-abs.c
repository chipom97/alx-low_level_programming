#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer
 * Return: positive integer
 */

int _abs(int n)
{

	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}

}
