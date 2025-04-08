#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char *og_s = s;
	int i = 0, j;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (og_s);
}
