#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = (n * (-1));
	}
	ld = (n % 10);

	_putchar('0' + ld);
	return (ld);
}
