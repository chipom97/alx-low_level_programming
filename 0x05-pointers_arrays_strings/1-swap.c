#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap two integers
 * @a: pointer to a
 * @b: pointer to b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c, *c1;

	c1 = &c;
	*c1 = *a;
	*a = *b;
	*b = *c1;
}
