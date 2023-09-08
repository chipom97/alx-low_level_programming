#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int td, od;
	for (td = 0; td <= 8; td++)
	{
		for (od = td + 1; od <= 9; od++)
	{
		putchar(td + '0');
		putchar(od + '0');
		if (td != 8 || od != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
