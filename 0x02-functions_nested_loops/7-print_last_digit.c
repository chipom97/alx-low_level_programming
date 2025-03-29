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

	ld = (n % 10);

	if (ld < 0)
	{
		ld *= -1;
	}

	_putchar('0' + ld);
	return (ld);
}
