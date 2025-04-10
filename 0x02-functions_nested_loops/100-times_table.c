#include "main.h"

/**
 * print_times_table - print times table
 * @n: integer
 * reduce the number of lines by calculating the variables
 * inside the _putchar line
 * Return: Always 0.
 */

void print_times_table(int n)
{
    int row, col, p;

    if  (!(n < 0 || n > 15))
    {
        for (row = 0; row <= n; row++)
        {
            for (col = 0; col <= n; col++)
            {
                p = (row * col);
                if (p >= 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar('0' + (p / 100));
                    _putchar('0' + ((p / 10) % 10));
                    _putchar('0' + (p % 10));
                }
                else if (p >= 10)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar('0' + (p / 10));
                    _putchar('0' + (p % 10));
                }
                else
                {
                    if (col == 0)
                    {
                        _putchar('0' + p);
                    }
                    else
                    {
                        _putchar(',');
                        _putchar(' ');
                        _putchar(' ');
                        _putchar(' ');
                        _putchar('0' + p);
                    }
                }
            }
            _putchar('\n');
        }
    }
}
