#include "main.h"
/**
* _isalpha - check if letter is lowercase or uppercase
* @c: The character to check
* Return: Always 1 (Success)
*/
int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
