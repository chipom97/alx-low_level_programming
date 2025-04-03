#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string
 * odd characters - n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int i, j, len, n;

	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	len = (i);

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n  = (len - 1) / 2;
	}
	for (j = n; j <= len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

