#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
		i++;
	}
}
