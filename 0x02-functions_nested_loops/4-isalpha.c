#include "main.h"

/**
 * _isalpha - check for uppercase and lowercase character
 * @c: character to check
 * Return: 1 - if lowercase character
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
		}
	else
	{
		return (0);
	}
}
