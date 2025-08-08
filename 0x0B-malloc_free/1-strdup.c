#include <stdlib.h>

/**
 * _strdup - copy string
 * @str: string
 *
 * Return: new string
 */

char *_strdup(char *str)
{
	char *copied_string;
	int length = 0;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copied_string = malloc(length * sizeof(char) + 1);
	if (copied_string == NULL)
	{
		return (NULL);
	}

	while (i < length)
	{
		copied_string[i] = str[i];
		i++;
	}
	copied_string[length + 1] = '\0';

	return (copied_string);
}
