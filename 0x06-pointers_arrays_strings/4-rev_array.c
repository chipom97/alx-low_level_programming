#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, k, tmp;

	k = (n - 1);

	for (i = 0; i < (n / 2) ; i++)
	{
		tmp = a[i];
		a[i] = a[k - i];
		a[k - i] = tmp;
	}
}
