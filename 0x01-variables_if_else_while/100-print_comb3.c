#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, counter;

	counter = 49;
	for (i = 48; i < 57; i++)
	{
		for (j = counter; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 && i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		counter++;
	}
	putchar('\n');
	return (0);
}
