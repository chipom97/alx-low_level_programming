#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap integers
 * @a: ingteger
 * @b: integer
 * Return: values
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
