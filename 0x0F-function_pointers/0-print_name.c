#include <stdio.h>

/**
 * print_name - Calls a function to print a name
 * @name: The name to be printed
 * @f: A function pointer to the print function
 *
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
