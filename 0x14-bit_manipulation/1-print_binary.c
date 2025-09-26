#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	static int started;
	int bit;

	if (n == 0 && !started)
	{
		_putchar('0');
		return;
	}
	else if  (n == 0)
		return;

	started = 1;
	bit = (n & 1);
	print_binary(n >> 1);
	_putchar('0' + bit);
}
