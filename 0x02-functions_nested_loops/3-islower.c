#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: character to check
 * Return: 1 - if lowercase character
 */

int _islower(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
