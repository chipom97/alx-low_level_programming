#include "3-calc.h"
#include <stdlib.h>   /* for atoi, exit */
#include <stdio.h>    /* for printf */
#include <string.h>   /* for strcmp */

/**
 * main - point of entry
 *
 * @argc: argument
 * @argv: argument vector
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);

	/* Check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Get the operator function */
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* Check for division/modulo by zero */
	if ((strcmp(argv[2], "/") == 0 ||
		(strcmp(argv[2], "%")) == 0) &&
		atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* Convert numbers and execute */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", func(num1, num2));
	return (0);
}
