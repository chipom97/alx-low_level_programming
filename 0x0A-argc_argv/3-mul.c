#include <stdio.h>
#include <stdlib.h> /*for atoi */
/**
* main - a program that multiplies two numbers.
* @argc: argument count
* @argv: argument vector
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int  len = argc - 1;
	int num1, num2, mul;

	if (len != 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
