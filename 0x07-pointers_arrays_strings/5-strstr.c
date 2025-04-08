#include "main.h"

/**
 * _strstr -  function that locates a substring.
 * @haystack: string
 * @needle: sub-string
 * Return: the new string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}

