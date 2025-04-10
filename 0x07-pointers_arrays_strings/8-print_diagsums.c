#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: size
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, primary_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_sum, secondary_sum);
}
