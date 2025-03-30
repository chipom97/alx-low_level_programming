#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int tens, units, hour1, hour2, condition;

	for (hour1 = 48; hour1 <= 50; hour1++)
	{
		if (hour1 == 48 || hour1 == 49)
		{
			condition = 57;
		}
		else
		{
			condition = 51;
		}
		for (hour2 = 48; hour2 <= condition; hour2++)
		{
			for (tens = 48; tens <= 53; tens++)
			{
				for (units = 48; units <= 57; units++)
				{
					_putchar(hour1);
					_putchar(hour2);
					_putchar(':');
					_putchar(tens);
					_putchar(units);
					_putchar('\n');
				}
			}
		}
	}
}
