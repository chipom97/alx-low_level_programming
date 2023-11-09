#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings
* @separator: the string
* @n: the number of strings
* @...: a variable number of string arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
