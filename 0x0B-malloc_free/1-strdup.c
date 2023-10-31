#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: The string
 *
 * Return: A pointer
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
duplicate = (char *)malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i <= length; i++)
duplicate[i] = str[i];
return (duplicate);
}
