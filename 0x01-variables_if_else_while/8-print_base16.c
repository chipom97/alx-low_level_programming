#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char num = '0';

	while (num <= 'f')
	{
	putchar(num);
	num++;
	if (num == ':')
	num = 'a';
	}
	putchar('\n');
	return (0);
}
