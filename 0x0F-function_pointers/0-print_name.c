#include <stdio.h>
/**
* print_name - prints name
* @name: name
* @f: f
*
* Return: always 0
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
