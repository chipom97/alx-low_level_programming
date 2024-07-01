#include "main.h"

/**
 * cap_string - capitalize string
 * @str: string
 * Return: string.
 */

char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0;
	int j;
	int cap_next = 1;

	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				cap_next = 1;
				break;
			}
		}
		if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			cap_next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cap_next = 0;
		}
		i++;
	}
	return (str);
}
