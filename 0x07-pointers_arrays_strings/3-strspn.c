#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string
 * @accept: sub-string
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int letter_found;

	for (i = 0; s[i] != '\0'; i++)    
	{
		letter_found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				letter_found = 1;
				break;
            }
		}
		if (letter_found == 0)
		return (i);
 
	}
	return (i);
}
