#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
