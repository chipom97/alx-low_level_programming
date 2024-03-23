#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: (0) Success.
 */
void jack_bauer(void)
{
int hour1, hour2, minute, second;

for (hour1 = 0; hour1 <= 2; hour1++)
{
for (hour2 = 0; hour2 <= 9; hour2++)
{
if (hour1 == 2 && hour2 == 4)
{
break;
}
for (minute = 0; minute <= 5; minute++)
{
for (second = 0; second <= 9; second++)
{
_putchar('0' + hour1);
_putchar('0' + hour2);
_putchar(':');
_putchar('0' + minute);
_putchar('0' + second);
_putchar('\n');
}
}
}
}
}
