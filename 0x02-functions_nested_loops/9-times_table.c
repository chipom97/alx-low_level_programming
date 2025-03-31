#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int row, col, n, n1, n2;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			n = (row * col);
			if (n >= 10)
			{
				n1 = n % 10;
				n2 = n / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + n2);
				_putchar('0' + n1);
			}
			else
			{
				if (col == 0)
				{
					_putchar('0' + n);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + n);
				}
			}
		}
		_putchar('\n');
	}
}
